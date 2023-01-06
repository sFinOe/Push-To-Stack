/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:38:05 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/15 21:38:41 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lstclear(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->top;
	while (stack->top)
	{
		stack->top->data = 0;
		stack->top->index = 0;
		tmp = stack->top->next;
		free(stack->top);
		stack->top = tmp;
	}
	free(stack);
}

void	error(char *str, t_stack *a, t_stack *b)
{
	lstclear(a);
	lstclear(b);
	ft_putstr_fd(str, 1);
	exit(1);
}

void	lstclear2(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	tmp = a->top;
	while (a->top)
	{
		a->top->data = 0;
		a->top->index = 0;
		tmp = a->top->next;
		free(a->top);
		a->top = tmp;
	}
	free(a);
	lstclear3(b);
}

void	lstclear3(t_stack *b)
{
	t_node	*tmp;

	tmp = b->top;
	while (b->top)
	{
		b->top->data = 0;
		b->top->index = 0;
		tmp = b->top->next;
		free(b->top);
		b->top = tmp;
	}
	free(b);
}
