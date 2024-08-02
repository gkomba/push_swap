/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <<marvin@42.fr> >                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:10:29 by gkomba            #+#    #+#             */
/*   Updated: 2024/08/02 13:14:31 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_list_dup(t_list **lst)
{
	t_list	*curr;
	t_list	*tmp;

	if ((*lst) == NULL || (*lst)->next == NULL)
		return ;
	curr = *lst;
	while (curr)
	{
		tmp = curr->next;
		while (tmp)
		{
			if (tmp->value == curr->value)
			{
				ft_free_stacks(lst);
				ft_send_error_sms();
			}
			tmp = tmp->next;
		}
		curr = curr->next;
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
