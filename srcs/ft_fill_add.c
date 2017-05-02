/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 15:22:15 by syusof            #+#    #+#             */
/*   Updated: 2017/04/27 16:07:30 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

int		ft_fill_add(unsigned char *s, unsigned int pc, unsigned char **regi1, t_add *add1)
{
	unsigned int	i;
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	*s3;

	i = 1;
	if (!(s[(pc + 1) % MEM_SIZE] == 84 && s[(pc + 2) % MEM_SIZE] > 0 && s[(pc + 2) % MEM_SIZE] <= REG_NUMBER && s[(pc + 3) % MEM_SIZE] > 0 && s[(pc + 3) % MEM_SIZE] <= REG_NUMBER && s[(pc + 4) % MEM_SIZE] > 0 && s[(pc + 4) % MEM_SIZE] <= REG_NUMBER))
		return (0);
	s1 = (unsigned char*)malloc(sizeof(unsigned char) * i);
	s2 = (unsigned char*)malloc(sizeof(unsigned char) * i);
	s3 = (unsigned char*)malloc(sizeof(unsigned char) * i);
	ft_cp(i, s1, regi1[s[(pc + 2) % MEM_SIZE]], 0);
	ft_cp(i, s2, regi1[s[(pc + 3) % MEM_SIZE]], 0);
	ft_cp(i, s3, regi1[s[(pc + 4) % MEM_SIZE]], 0);
	add1->param01 = s1;
	add1->param02 = s2;
	add1->param03 = s3;
	return (1);
}
