/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 19:04:13 by syusof            #+#    #+#             */
/*   Updated: 2017/05/02 19:10:03 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

void		ft_fill_fork(unsigned char *s, unsigned int pc, t_fork *fork1)
{
	fork1->param01 = ft_conv_to_int(&(s[(pc + 1) % MEM_SIZE]), IND_SIZE);
}
