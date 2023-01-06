/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:40:10 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/15 21:40:20 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_stack *stack)
{
	t_node	*head;
	int		max;
	int		max_bits;

	head = stack->top;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
		{
			max = head->index;
		}
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	free(head);
	return (max_bits);
}

t_node	*index_min(t_stack *stack)
{
	t_node	*head;
	t_node	*min;
	int		no_min;

	min = NULL;
	no_min = 0;
	head = stack->top;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!no_min || head->data < min->data))
			{
				min = head;
				no_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_a(t_stack *stack)
{
	t_node	*head;
	int		index;

	index = 0;
	head = index_min(stack);
	while (head)
	{
		head->index = index++;
		head = index_min(stack);
	}
	free(head);
}
