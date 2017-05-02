/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdai <jjourdai@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 15:40:55 by jjourdai          #+#    #+#             */
/*   Updated: 2017/03/02 11:09:54 by jjourdai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_exit_atoi(void)
{
	ft_putendl_fd("Overflow in ft_atoi", 2);
	exit(EXIT_FAILURE);
}

int				ft_atoi(const char *nptr)
{
	int n;
	int i;

	i = 0;
	while ((nptr[i] == '\n') || (nptr[i] == '\t') || (nptr[i] == '\v') ||
			(nptr[i] == ' ') || (nptr[i] == '\f') || (nptr[i] == '\r'))
		i++;
	if (nptr[i] == '-')
	{
		n = ft_atoi_u(nptr + ++i);
		if ((int)(-n) >= 0)
			ft_exit_atoi();
		n = n * -1;
	}
	else
	{
		if (nptr[i] == '+')
			i++;
		n = ft_atoi_u(nptr + i);
		if ((int)n < 0)
			ft_exit_atoi();
	}
	return (n);
}

unsigned int	ft_atoi_u(const char *nptr)
{
	int				i;
	unsigned int	nbr;

	nbr = 0;
	i = 0;
	while ((nptr[i] == '\n') || (nptr[i] == '\t') || (nptr[i] == '\v') ||
			(nptr[i] == ' ') || (nptr[i] == '\f') || (nptr[i] == '\r'))
		i++;
	i--;
	while (nptr[++i] && ft_isdigit(nptr[i]))
	{
		if ((nbr & (~0u << 28)) && nbr > (UINT_MAX - (nptr[i] - 48)) / 10)
		{
			ft_putendl_fd("Overflow in ft_atoi", 2);
			exit(EXIT_FAILURE);
		}
		nbr = nbr * 10 + nptr[i] - 48;
	}
	return (nbr);
}
