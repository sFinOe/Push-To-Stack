/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:35:20 by zkasmi            #+#    #+#             */
/*   Updated: 2022/02/02 15:18:11 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize2(t_node *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst ->next;
		i++;
	}
	return (i);
}

void	big_sorting(t_stack *a, t_stack *b)
{
	t_node	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = -1;
	head_a = a->top;
	size = ft_lstsize2(head_a);
	max_bits = get_max_bits(a);
	while (++i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = a->top;
			if (((head_a->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (intlen(b) != 0)
			pa(a, b);
	}
}
