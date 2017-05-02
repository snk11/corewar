/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 17:06:55 by syusof            #+#    #+#             */
/*   Updated: 2017/04/27 20:40:53 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

#include <math.h>

unsigned int	ft_conv_to_int(unsigned char *s, unsigned int i)
{
	unsigned int	res;
	unsigned int	k;

	res = 0;
	k = 0;
	while (i > 0)
	{
		res = res + (s[i - 1] * ft_powmod(2,k));
		res = res % IDX_MOD;
		i--;
		k = k + 8;
	}
	return (res);
}
