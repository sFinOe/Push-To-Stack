/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:06:02 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/19 21:06:08 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	intcheck(char *str, t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	i = 0;
	j = ft_atoi(str);
	if (ft_atoiplus(str) == 0)
		error("Error\n", a, b);
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			return (0);
		i++;
	}
	error("Only Numbers allowed!\n", a, b);
	return (0);
}

int	doublecheck(int ac, char **av, t_stack *a, t_stack *b)
{
	int	len;
	int	i;
	int	j;

	len = ac - 1;
	i = 1;
	while (i <= len)
	{
		j = i + 1;
		while (j <= len)
		{
			if (ft_strncmp(av[i], av[j], len) == 0)
				error("Theres doubles\n", a, b);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_sorted(t_stack *a, int len)
{
	t_node	*tmp;
	int		i;

	i = 1;
	tmp = a->top;
	while (i < len)
	{
		if (tmp->data > tmp->next->data)
			return (1);
		tmp = tmp->next;
		i++;
	}
	free(tmp);
	return (0);
}
