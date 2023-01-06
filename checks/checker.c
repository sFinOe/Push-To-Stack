/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:13:02 by zkasmi            #+#    #+#             */
/*   Updated: 2022/02/02 18:25:09 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;
	int		i;

	line = NULL;
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
		main2(line, a, b, i);
	}
	else
		error("Wrong Args!", a, b);
}
