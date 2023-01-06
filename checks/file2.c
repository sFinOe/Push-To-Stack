/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:06:12 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/19 21:07:57 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(struct s_stack *stack, int data)
{
	struct s_node	*new;

	new = malloc(sizeof(struct s_node));
	new->data = data;
	new->next = stack->top;
	stack->top = new;
}

int	checkempty(t_stack *stack)
{
	if (!stack->top)
		return (1);
	return (0);
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

t_stack	*set_stack(void)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->top = NULL;
	return (new);
}
