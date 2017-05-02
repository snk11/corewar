/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_zjmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:00:49 by syusof            #+#    #+#             */
/*   Updated: 2017/05/02 19:08:02 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

void		ft_fill_zjmp(unsigned char *s, unsigned int pc, t_zjmp *zjmp1)
{
	zjmp1->param01 = ft_conv_to_int(&(s[(pc + 1) % MEM_SIZE]), IND_SIZE);
}
