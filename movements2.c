/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:44:45 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/15 21:45:32 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *b)
{
	int	tmp;

	if (checkempty(b) == 1 || !b->top->next)
		return ;
	tmp = b->top->next->data;
	b->top->next->data = b->top->data;
	b->top->data = tmp;
	ft_putstr_fd("sb\n", 1);
}

void	rb(t_stack *b)
{
	t_node	*newnode;
	t_node	*tmp;
	t_node	*tmp2;

	tmp = b->top;
	if (checkempty(b) == 1 || !b->top->next)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	if (tmp->next == '\0')
	{
		newnode = malloc(sizeof(t_node));
		newnode->data = b->top->data;
		newnode->next = NULL;
		tmp->next = newnode;
	}
	tmp2 = b->top->next;
	b->top = NULL;
	b->top = tmp2;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	ft_putstr_fd("rr\n", 1);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	ft_putstr_fd("ss\n", 1);
}
