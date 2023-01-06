/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:32:20 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/15 21:40:03 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_info	*putnum(void)
{
	t_info	*new;

	new = malloc(sizeof(t_info));
	new->max = 0;
	new->min = 0;
	new->mid = 0;
	return (new);
}

void	smallnum(t_stack *stack, t_info *info)
{
	t_node	*tmp;

	tmp = stack->top;
	info->min = tmp->data;
	while (tmp)
	{
		if (tmp->data < info->min)
			info->min = tmp->data;
		tmp = tmp->next;
	}
}

void	maxnum(t_stack *stack, t_info *info)
{
	t_node	*tmp;

	tmp = stack->top;
	info->max = tmp->data;
	while (tmp)
	{
		if (tmp->data > info->max)
			info->max = tmp->data;
		tmp = tmp->next;
	}
}

void	minnum(t_stack *stack, t_info *info)
{
	t_node	*tmp;

	smallnum(stack, info);
	maxnum(stack, info);
	tmp = stack->top;
	info->mid = tmp->data;
	while (tmp)
	{
		if (tmp->data < info->max && tmp->data > info->min)
			info->mid = tmp->data;
		tmp = tmp->next;
	}
}
