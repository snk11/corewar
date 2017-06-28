/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_or.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 13:23:31 by syusof            #+#    #+#             */
/*   Updated: 2017/06/21 11:55:05 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tyassine.h"

unsigned char	*ft_or2_p1(unsigned char *sa, unsigned char *sb,
		unsigned int i, unsigned int j)
{
	unsigned char	*sc;
	unsigned int	k;

	k = (i >= j) ? i : j;
	sc = ft_memalloc(sizeof(unsigned char) * k);
	while (j > 0)
	{
		sc[i - 1] = sa[i - 1] | sb[j - 1];
		i--;
		j--;
	}
	while (i > 0)
	{
		sc[i - 1] = 0;
		i--;
	}
	return (sc);
}

unsigned char	*ft_or2_p2(unsigned char *sa, unsigned char *sb,
		unsigned int i, unsigned int j)
{
	unsigned char	*sc;
	unsigned int	k;

	k = (i >= j) ? i : j;
	sc = ft_memalloc(sizeof(unsigned char) * k);
	while (i > 0)
	{
		sc[j - 1] = sa[i - 1] | sb[j - 1];
		i--;
		j--;
	}
	while (j > 0)
	{
		sc[j - 1] = 0;
		j--;
	}
	return (sc);
}

unsigned char	*ft_or2(unsigned char *sa, unsigned char *sb,
		unsigned int i, unsigned int j)
{
	unsigned char	*sc;
	unsigned int	k;

	sc = NULL;
	if (i == j)
	{
		k = (i >= j) ? i : j;
		sc = ft_memalloc(sizeof(unsigned char) * k);
		while (i > 0)
		{
			sc[i - 1] = sa[i - 1] | sb[i - 1];
			i--;
		}
	}
	else if (i > j)
		sc = ft_or2_p1(sa, sb, i, j);
	else
		sc = ft_or2_p2(sa, sb, i, j);
	return (sc);
}

int				ft_or(t_env *env, t_proc *proc1)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	*s3;
	unsigned char	*s4;

	if (IND_SIZE <= REG_SIZE)
	{
		s1 = ft_get_para(env->mem, proc1, 0);
		s2 = ft_get_para(env->mem, proc1, 1);
		s3 = ft_get_para(env->mem, proc1, 2);
		if (s1 && s2 && s3)
		{
			s4 = ft_or2(s1, s2, REG_SIZE, REG_SIZE);
			ft_cp_s_to_s(s3, s4, REG_SIZE, REG_SIZE);
			env->proc->carry = ft_getcarry(s3);
			return (1);
		}
	}
	return (0);
}
