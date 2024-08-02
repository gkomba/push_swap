/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gildo <gildo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:45:11 by gkomba            #+#    #+#             */
/*   Updated: 2024/08/02 12:53:19 by gildo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stacks(t_list **stack)
{
	t_list	*node;

	while ((*stack))
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}
}
