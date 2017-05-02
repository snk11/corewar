/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sti.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 18:19:24 by syusof            #+#    #+#             */
/*   Updated: 2017/04/27 20:44:38 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

void	ft_sti(unsigned char *s, unsigned char *ra, unsigned int res, int sign)
{
	unsigned int	i;

	i = REG_SIZE;
	if (sign == 1)
	{
		while (i > 0)
		{
			s[(res + i - 1) % MEM_SIZE] = ra[i - 1];
			i--;
		}
	}
	else if (sign == -1)
	{
		while (i > 0)
		{
			s[((- res) + i - 1) % MEM_SIZE] = ra[i - 1];
			i--;
		}
	}
}
