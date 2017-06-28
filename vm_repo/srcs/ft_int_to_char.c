/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:11:03 by syusof            #+#    #+#             */
/*   Updated: 2017/06/21 11:54:27 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tyassine.h"

unsigned char		*ft_int_to_char(unsigned int n)
{
	int				i;
	unsigned char	*s1;

	i = sizeof(unsigned int);
	s1 = ft_memalloc(sizeof(unsigned char) * i);
	while (n)
	{
		s1[i - 1] = n & 0xff;
		n = n >> 8;
		i--;
	}
	return (s1);
}
