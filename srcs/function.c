/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 17:36:56 by syusof            #+#    #+#             */
/*   Updated: 2017/04/25 19:33:11 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syusof.h"

t_lst		*create_lst()
{
	t_lst	*curlst;
	int		i;

	curlst = NULL;
	if (!(curlst = (t_lst*)malloc(sizeof(t_lst))))
		return (NULL);
	{
		curlst->content = (t_process*)malloc(sizeof(t_process));
		((t_process*)(curlst->content))->pc = (unsigned char*)malloc(sizeof(unsigned char) * REG_SIZE);
		((t_process*)(curlst->content))->regi = (unsigned char**)malloc(sizeof(unsigned char*) * REG_NUMBER);
		i = 0;
		while (i < REG_NUMBER)
		{
			((t_process*)(curlst->content))->regi[i] = (unsigned char*)malloc(sizeof(unsigned char) * REG_SIZE);
			i++;
		}
	}
	curlst->next = NULL;
	return (curlst);
}

t_lst		*add_lst(t_lst **lst1, t_lst **lst2)
{
	(*lst2)->next = *lst1;
	return (*lst2);
}

t_lst		*add_lst_between(t_lst **lst1, t_lst *lst2, t_lst **lst3)
{
	if (lst2 == NULL)
	{
		(*lst3)->next = *lst1;
		return (*lst3);
	}
	else
	{
		(*lst3)->next = lst2->next;
		lst2->next = *lst3;
	}
	return (*lst1);
}

t_lst		*add_lst_down(t_lst **lst1, t_lst **lst2)
{
	t_lst	*lstmp;

	if (*lst1 == NULL)
		return (*lst2);
	else
	{
		lstmp = *lst1;
		while (lstmp->next)
			lstmp = lstmp->next;
		lstmp->next = *lst2;
	}
	return (*lst1);
}
