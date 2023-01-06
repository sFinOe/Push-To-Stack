/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:05:39 by zkasmi            #+#    #+#             */
/*   Updated: 2022/02/02 18:08:18 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	lstclear(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->top;
	while (stack->top)
	{
		tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
	}
	free(stack->top);
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
		tmp = b->top->next;
		free(b->top);
		b->top = tmp;
	}
	free(b);
}
