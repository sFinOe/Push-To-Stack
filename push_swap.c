/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:45:36 by zkasmi            #+#    #+#             */
/*   Updated: 2022/02/02 18:00:15 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	whereto(t_stack *a, t_stack *b)
{
	if (intlen(a) < 3)
		minisorting(a);
	else if (intlen(a) == 3)
		minisorting2(a);
	else if (intlen(a) > 3 && intlen(a) <= 5)
		midsorting(a, b);
	else if (intlen(a) > 5)
		big_sorting(a, b);
}

t_stack	*set_stack(void)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->top = NULL;
	return (new);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	a = set_stack();
	b = set_stack();
	if (ac > 1)
	{
		i = ac -1;
		while (av[i] && i != 0)
		{
			if (intcheck(av[i], a, b) == 1 || doublecheck(ac, av, a, b))
				error("Error\n", a, b);
			push(a, ft_atoi(av[i]));
			i--;
		}
		i = ac -1;
		if (is_sorted(a, i) != 1)
			return (0);
		index_a(a);
		whereto(a, b);
		lstclear2(a, b);
	}
	else
		error("Wrong args!", a, b);
}
