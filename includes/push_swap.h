/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:55:18 by tvillann          #+#    #+#             */
/*   Updated: 2023/07/24 13:55:18 by tvillann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../printf/includes/ft_printf.h"

typedef struct s_lst
{
	int				content;
	int				index;
	struct s_lst	*next;
	struct s_lst	*prev;
}				t_lst;

//SIMPLE_SORT_C
int		is_sorted(t_lst **stack);
void	simple_sort(t_lst **a_stack, t_lst **b_stack);

//SIMPLE_SORT_UTLIS_C
int		is_sorted(t_lst **stack);
int		is_order(t_lst **stack, int size);
void	reset_index(t_lst **stack);
void	rotate_to_min(t_lst **stack, int size);

//INDEX_C
void	ps_index(t_lst **stack);

//RADIX_C
int		lst_size(t_lst *lst);
void	radix_sort(t_lst **a_stack, t_lst **b_stack);

//LST_UTILS_C
void	lst_addfront(t_lst **stack, t_lst *news);
void	lst_addback(t_lst **stack, t_lst *news);
t_lst	*lst_new(int content);
t_lst	*lst_last(t_lst *stack);

// Instructions
void	sa(t_lst **stack);
void	sb(t_lst **stack);
void	ss(t_lst **a_stack, t_lst **b_stack);

void	pa(t_lst **a_stack, t_lst **b_stack);
void	pb(t_lst **a_stack, t_lst **b_stack);

void	rotate(t_lst **stack);
void	ra(t_lst **stack);
void	rb(t_lst **stack);
void	rr(t_lst **a_stack, t_lst **b_stack);

void	reverse(t_lst **stack);
void	rra(t_lst **stack);
void	rrb(t_lst **stack);
void	rrr(t_lst **a_stack, t_lst **b_stack);

#endif