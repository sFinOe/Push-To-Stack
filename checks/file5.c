/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:10:15 by zkasmi            #+#    #+#             */
/*   Updated: 2022/02/02 18:11:48 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swaper(char *str, t_stack *a, t_stack *b)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(a);
	if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(a, b);
	if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(a);
	if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(a, b);
	if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(a, b);
	if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(a);
	if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(b);
	if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(a, b);
	if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(b);
	if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(a, b);
	if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(b);
}

void	main2(char *line, t_stack *a, t_stack *b, int i)
{
	line = get_next_line(0);
	while (line)
	{
		swaper(line, a, b);
		line = get_next_line(0);
	}
	if (line == NULL)
	{
		if (checkempty(b))
		{
			if (is_sorted(a, i) != 1)
				printf("OK\n");
			else
				printf("KO\n");
		}
		else
			printf("KO\n");
	}
	free(line);
	lstclear(b);
}
