/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ld.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:30:13 by syusof            #+#    #+#             */
/*   Updated: 2017/04/27 15:36:15 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

void	ft_ld(unsigned char *s,unsigned int pc,int *carry, unsigned int n, unsigned char *r, int sign)
{
	unsigned int	i;

	i = REG_SIZE;
	if (sign == 1)
		ft_cp_in_r(i, r, s, pc + (n % IDX_MOD));
	else if (sign == -1)
		ft_cp_in_r(i, r, s, pc - (n % IDX_MOD));
	*carry = ft_getcarry(r);
}