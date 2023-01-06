/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:50:22 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/16 15:11:07 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nextone(t_stack *stack, t_info *info)
{
	if (stack->top->data == info->mid)
	{
		if (stack->top->next->data == info->min)
			sa(stack);
		else
			rra(stack);
	}
	free(info);
}

void	minisorting(t_stack *stack)
{
	if (stack->top->data > stack->top->next->data)
		sa(stack);
}

void	minisorting2(t_stack *stack)
{
	t_info	*info;

	info = putnum();
	minnum(stack, info);
	if (stack->top->data == info->min)
	{
		if (stack->top->next->data == info->max)
		{
			sa(stack);
			ra(stack);
		}
	}
	else if (stack->top->data == info->max)
	{
		if (stack->top->next->data == info->mid)
		{
			sa(stack);
			rra(stack);
		}
		else
			ra(stack);
	}
	nextone(stack, info);
}

void	midsorting(t_stack *a, t_stack *b)
{
	t_info	*info;

	info = putnum();
	minnum(a, info);
	if (intlen(a) == 4)
	{
		while (!(a->top->data == info->min))
			ra(a);
		pb(a, b);
		minnum(a, info);
		if (intlen(a) == 3)
			minisorting2(a);
		if (b->top->data < info->max)
			pa(a, b);
	}
	else if (intlen(a) == 5)
		midsorting2(a, b, info);
	free(info);
}

void	midsorting2(t_stack *a, t_stack *b, t_info *info)
{
	minnum(a, info);
	while (!(a->top->data == info->min))
		rra(a);
	pb(a, b);
	minnum(a, info);
	while (!(a->top->data == info->min))
		rra(a);
	pb(a, b);
	if (intlen(a) == 3)
		minisorting2(a);
	pa(a, b);
	pa(a, b);
}
