/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <<marvin@42.fr> >                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:45:11 by gkomba            #+#    #+#             */
/*   Updated: 2024/07/30 16:09:13 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stacks(t_list **stack)
{
	t_list	*node;

	while ((*stack)->next)
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}
	free(*stack);
}
