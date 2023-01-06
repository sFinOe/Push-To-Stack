/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:10:01 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/19 21:10:11 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sb(t_stack *b)
{
	int	tmp;

	if (checkempty(b) == 1 || !b->top->next)
		return ;
	tmp = b->top->next->data;
	b->top->next->data = b->top->data;
	b->top->data = tmp;
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
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
