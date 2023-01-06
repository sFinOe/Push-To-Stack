/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:08:06 by zkasmi            #+#    #+#             */
/*   Updated: 2022/02/02 18:24:02 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_stack *stack)
{
	int	tmp;

	if (checkempty(stack) == 1)
		return ;
	tmp = stack->top->next->data;
	stack->top->next->data = stack->top->data;
	stack->top->data = tmp;
}

void	ra(t_stack *stack)
{
	t_node	*tmp;
	t_node	*tmp2;
	t_node	*newnode;

	tmp = stack->top;
	if (checkempty(stack) == 1 || !stack->top->next)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	if (tmp->next == '\0')
	{
		newnode = malloc(sizeof(t_node));
		newnode->data = stack->top->data;
		newnode->next = NULL;
		tmp->next = newnode;
	}
	tmp2 = stack->top->next;
	free(stack->top);
	stack->top = tmp2;
}

void	rra(t_stack *stack)
{
	t_node	*tmp;
	t_node	*tmp2;
	t_node	*newnode;

	tmp = stack->top;
	if (checkempty(stack) == 1 || !stack->top->next)
		return ;
	while (tmp->next->next)
		tmp = tmp->next;
	newnode = malloc(sizeof(t_node));
	newnode->data = tmp->next->data;
	newnode->next = stack->top;
	stack->top = newnode;
	tmp2 = tmp->next;
	free(tmp2);
	tmp->next = NULL;
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*tmp2;
	int		tmp;

	if (checkempty(a) == 1)
		return ;
	tmp2 = a->top;
	tmp = getnum(a);
	push(b, tmp);
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*tmp2;
	int		tmp;

	if (checkempty(b) == 1)
		return ;
	tmp2 = b->top;
	tmp = getnum(b);
	push(a, tmp);
}
