/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powmod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 15:42:17 by syusof            #+#    #+#             */
/*   Updated: 2017/04/27 20:32:14 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

unsigned int	ft_powmod(unsigned int a, unsigned int n)
{
	unsigned int res;
	if (n == 0)
		res = 1;
	else
		res = a * ft_powmod(a, n - 1);
	return (res % IDX_MOD);
}
