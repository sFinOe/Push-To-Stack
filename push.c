/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:49:05 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/15 21:50:11 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(struct s_stack *stack, int data)
{
	struct s_node	*new;

	new = malloc(sizeof(struct s_node));
	new->data = data;
	new->index = -1;
	new->next = stack->top;
	stack->top = new;
}

void	pushplus(struct s_stack *stack, int data, int vindex)
{
	struct s_node	*new;

	new = malloc(sizeof(struct s_node));
	new->data = data;
	new->index = vindex;
	new->next = stack->top;
	stack->top = new;
}

int	getnum(struct s_stack *stack)
{
	struct s_node	*tmp;
	t_node			*tmp2;
	int				value;

	tmp = stack->top;
	value = stack->top->data;
	tmp2 = stack->top->next;
	free(stack->top);
	stack->top = tmp2;
	return (value);
}

int	getindex(t_node *tmp)
{
	int	index;

	index = tmp->index;
	return (index);
}
