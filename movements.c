/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:41:22 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/15 21:44:40 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp;

	if (checkempty(stack) == 1)
		return ;
	tmp = stack->top->next->data;
	stack->top->next->data = stack->top->data;
	stack->top->data = tmp;
	ft_putstr_fd("sa\n", 1);
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
		newnode->index = stack->top->index;
		newnode->next = NULL;
		tmp->next = newnode;
	}
	tmp2 = stack->top->next;
	free(stack->top);
	stack->top = tmp2;
	ft_putstr_fd("ra\n", 1);
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
	ft_putstr_fd("rra\n", 1);
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*tmp2;
	int		tmp;
	int		index;

	if (checkempty(a) == 1)
		return ;
	tmp2 = a->top;
	tmp = getnum(a);
	index = getindex(tmp2);
	pushplus(b, tmp, index);
	ft_putstr_fd("pb\n", 1);
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*tmp2;
	int		tmp;
	int		index;

	if (checkempty(b) == 1)
		return ;
	tmp2 = b->top;
	tmp = getnum(b);
	index = getindex(tmp2);
	pushplus(a, tmp, index);
	ft_putstr_fd("pa\n", 1);
}
