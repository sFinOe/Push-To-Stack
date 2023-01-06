/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:52:18 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/19 21:24:05 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <strings.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include "../gnl/get_next_line.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	struct s_node	*top;
}	t_stack;

t_stack	*set_stack(void);
void	error(char *str, t_stack *a, t_stack *b);
void	lstclear(t_stack *stack);
int		doublecheck(int ac, char **av, t_stack *a, t_stack *b);
int		intcheck(char *str, t_stack *a, t_stack *b);
void	push(struct s_stack *stack, int data);
int		is_sorted(t_stack *a, int len);
int		checkempty(t_stack *stack);
int		getnum(struct s_stack *stack);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	rra(t_stack *stack);
void	ra(t_stack *stack);
void	sa(t_stack *stack);
void	ss(t_stack *a, t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rb(t_stack *b);
void	sb(t_stack *b);
void	swaper(char *str, t_stack *a, t_stack *b);
void	rrb(t_stack *stack);
void	rrr(t_stack *a, t_stack *b);
int		intlen(t_stack *stack);
int		ft_atoiplus(const char *str);
void	lstclear3(t_stack *b);
void	lstclear2(t_stack *a, t_stack *b);
void	lstclear(t_stack *stack);
void	main2(char *line, t_stack *a, t_stack *b, int i);

#endif