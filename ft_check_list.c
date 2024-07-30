/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gildo <gildo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:10:29 by gkomba            #+#    #+#             */
/*   Updated: 2024/07/26 16:13:53 by gildo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_list_dup(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL || lst->next == NULL)
		return ;
	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (tmp->value == lst->value)
				ft_send_error_sms();
			tmp = tmp->next;
		}
		lst = lst->next;
	}
}

int	ft_is_sorted(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL || lst->next == NULL)
		return (1);
	tmp = lst;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}

int	ft_is_sorted_rev(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL || lst->next == NULL)
		return (1);
	tmp = lst;
	while (tmp->next)
	{
		if (tmp->value < tmp->next->value)
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}
