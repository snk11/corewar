/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:11:03 by syusof            #+#    #+#             */
/*   Updated: 2017/04/27 21:27:48 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

unsigned char		*ft_int_to_char(unsigned int n)
{
	int	i;
	int	j;
	unsigned char	*s1;

	i = sizeof(unsigned int);
	s1 = (unsigned char*)malloc(sizeof(unsigned char) * i);
	j = 0;
	while (i > 0)
	{
		s1[i - 1] = n << (j * 8) >> ((sizeof(unsigned int) - 1 - j) * 8);
		i--;
		j++;
	}
	return (s1);
}
