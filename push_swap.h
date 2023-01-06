/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:12:11 by zkasmi            #+#    #+#             */
/*   Updated: 2022/01/20 14:20:00 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <strings.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "Libft/libft.h"

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	struct s_node	*top;
}	t_stack;

typedef struct s_info
{
	int	max;
	int	min;
	int	mid;
}	t_info;

void	push(t_stack *stack, int content);
void	error(char *str, t_stack *a, t_stack *b);
int		intcheck(char *str, t_stack *a, t_stack *b);
int		doublecheck(int ac, char **av, t_stack *a, t_stack *b);
int		is_sorted(t_stack *a, int len);
void	sa(t_stack *stack);
int		checkempty(t_stack *stack);
int		intlen(t_stack *stack);
void	minisorting(t_stack *stack);
void	ra(t_stack *stack);
void	rra(t_stack *stack);
void	minisorting2(t_stack *stack);
t_info	*putnum(void);
void	smallnum(t_stack *stack, t_info *info);
void	maxnum(t_stack *stack, t_info *info);
void	minnum(t_stack *stack, t_info *info);
void	nextone(t_stack *stack, t_info *info);
void	midsorting(t_stack *a, t_stack *b);
int		getnum(struct s_stack *stack);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	sb(t_stack *b);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	midsorting2(t_stack *a, t_stack *b, t_info *info);
void	godsorting(t_stack *a, t_stack *b);
int		find_min(t_stack *a);
int		find_index(t_stack *a, int min);
int		pop(struct s_stack *stack);
int		isEmpty(struct s_stack *stack);
void	big_sorting(t_stack *a, t_stack *b);
int		get_max_bits(t_stack *stack);
void	index_a(t_stack *stack);
t_node	*index_min(t_stack *stack);
int		intlen1(t_node *tmp);
void	pushplus(struct s_stack *stack, int data, int vindex);
int		getindex(t_node *tmp);
void	lstclear(t_stack *stack);
void	lstclear2(t_stack *a, t_stack *b);
void	lstclear3(t_stack *b);
int		ft_atoiplus(const char *str);

#endif