/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:10:39 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/19 21:12:01 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rrb(t_stack *stack)
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
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}

int	intlen(t_stack *stack)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = stack->top;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	free(tmp);
	return (i);
}

int	ft_atoiplus2(const char *str, int i, int long total, int long pow)
{
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		total = total * 10 + (str[i] - '0');
		i++;
	}
	if ((total * pow) > 2147483647 || (total * pow) < -2147483648)
		return (0);
	return (1);
}

int	ft_atoiplus(const char *str)
{
	int long	pow;
	int			i;
	int long	total;
	int			j;

	j = 0;
	total = 0;
	pow = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			pow = -1;
			j++;
		}
		i++;
	}
	if (j > 1)
		return (0);
	return (ft_atoiplus2(str, i, total, pow));
}
