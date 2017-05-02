/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fork.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 19:12:40 by syusof            #+#    #+#             */
/*   Updated: 2017/05/02 19:32:04 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

void	ft_fork(unsigned char *s, unsigned int pc, unsigned int brb)
{
	unsigned int	i;

	i = REG_SIZE;
	ft_cp(i, &(s[pc + (brb % IDX_MOD)]), s, pc);
}
