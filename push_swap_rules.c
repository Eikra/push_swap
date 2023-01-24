/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:45:20 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/23 15:02:58 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	is_sorted_list_a(t_stack *a)
int	is_needed_ra(t_stack *a)
{
	t_stack	*t;
	t_stack	*temp;

	t = a;
	temp = t;
	while (t)
	{
		if (t->next == NULL && temp->n < t->n)
			return (1);
		t = t->next;
	}
	return (0);
}

int	is_needed_sa(t_stack *a)
{
	t_stack	*t;
	t_stack	*temp;

	t = a;
	while (t)
	{
		temp = t->next;
		if (temp && temp->next == NULL && t->n < temp->n)
			return (1);
		t = t->next;
	}
	return (0);
}

int	is_needed_rra(t_stack *a)
{
	t_stack	*t;
	t_stack	*temp;

	t = a;
	// temp = t->next;
	// if (t && temp && temp->n > t->n)
	// 	return (1);
	temp = a;
	while (t)
	{
		if (t->next == NULL && temp->n < t->n)
			return (1);
		t = t->next;
	}
	return (0);
}

int	is_sorted_a(t_stack *a)
{
	t_stack	*t;
	t_stack	*s;

	t = a;
	while (t)
	{
		s = t->next;
		if (s && t->n < s->n)
			return (0);
		t = t->next;
	}
	return (1);
}
void	ft_sort_three_a(t_stack *a, t_stack *b)
{
	if (is_needed_ra(a))
	{
		if (is_needed_rb(b))
			rr(a, b);
		else
			ra(a);
		ft_sort_three_a(a, b);
	}
	if (is_needed_sa(a))
	{
		if (is_needed_sb(b))
			ss(a, b);
		else
			sa(a);
		ft_sort_three_a(a, b);
	}
	if (is_needed_rra(a))
	{
		if (is_needed_rrb(b))
			rrr(a, b);
		else
			rra(a);
		ft_sort_three_a(a, b);
	}
	return ;
}

void	ft_sort_three_b(t_stack *a, t_stack *b)
{
	if (is_needed_sb(b))
	{
		if (is_needed_sa(a))
			ss(a, b);
		else
			sb(b);
		ft_sort_three_b(a, b);
	}
	if (is_needed_rrb(b))
	{
		if (is_needed_rra(a))
			rrr(a, b);
		else
			rrb(b);
		ft_sort_three_b(a, b);
	}
	if (is_needed_rb(b))
	{
		if (is_needed_ra(a))
			rr(a, b);
		else
			rb(b);
		ft_sort_three_b(a, b);
	}
	return ;
}
void	ft_sort(t_stack *a, t_stack *b)
{
	if (is_needed_ra(a) && b->next && is_needed_rb(b))
	{
		rr(a, b);
	}
	if (is_needed_rra(a) && b->next && is_needed_rrb(b))
	{
		rrr(a, b);
	}
	if (is_needed_ra(a))
	{
		ra(a);
	}
	if (is_needed_sa(a) && b->next && is_needed_sb(b))
	{
		ss(a, b);
	}
	if (is_needed_rra(a))
	{
		rra(a);
	}
	if (b->next && is_needed_rrb(b))
	{
		rrb(b);
	}
	if (b->next && is_needed_rb(b))
	{
		rb(b);
	}
	if (is_needed_sa(a))
	{
		sa(a);
	}
	if (b->next && is_needed_sb(b))
	{
		sb(b);
	}
}

void	ft_sort_five(t_stack *a, t_stack *b)
{
	// if (ft_lstsize(a) == 5)
	// {
	// 	pb(a, b);
	// 	pb(a, b);
	// 	ft_sort_three_a(a, b);
	// }
	// pa(a, b);
	// ft_sort(a, b);
	// pa(a, b);
	// print_stack(a);
	// ft_sort(a, b);
	ft_sort_stack(a,b);
	print_stack(a);
	// printf("\n");
}

// void	push_swap(t_stack *a, int size)
// {
// 	if (size == 3)
// 		ft_sort_three(a);
// 	// if (size == 5)
// 	// 	if (size == 100)
// 	// 		if (size == 500)
// }