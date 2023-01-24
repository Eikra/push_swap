/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:30:25 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/23 12:13:30 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_needed_rb(t_stack *b)
{
	t_stack	*t;
	t_stack	*temp;

	t = b->next;
	temp = t;
	while (t)
	{
		if (t->next == NULL && temp->n > t->n)
			return (1);
		t = t->next;
	}
	return (0);
}

int	is_needed_sb(t_stack *b)
{
	t_stack	*t;
	t_stack	*temp;

	//ft_printf("test\n");
	t = b->next;
	while (t)
	{
		temp = t->next;
		if (temp && temp->next == NULL && t->n > temp->n)
			return (1);
		t = t->next;
	}
	return (0);
}

int	is_needed_rrb(t_stack *b)
{
	t_stack	*t;
	t_stack	*temp;

	t = b->next;
	temp = t->next;
	// if (t && temp && temp->n < t->n)
	// 	return (1);
	temp = b->next;
	while (t)
	{
		if (temp && t->next == NULL && temp->n > t->n)
			return (1);
		t = t->next;
	}
	return (0);
}

int	is_sorted_b(t_stack *b)
{
	t_stack	*t;
	t_stack	*s;

	t = b->next;
	while (t)
	{
		s = t->next;
		if (s && t->n > s->n)
			return (0);
		t = t->next;
	}
	return (1);
}

void	print_stack(t_stack *a)
{
	t_stack	*head;

	head = a;
	//ft_printf("test");
	while (head)
	{
		ft_printf("%d/", head->n);
		head = head->next;
	}
}

// void	ft_sort_stack(t_stack *a, t_stack *b)
// {
// 	if (is_needed_rra(a) && b->next && is_needed_rrb(b))
// 		rrr(a, b);
// 	else if (is_needed_ra(a) && b->next && is_needed_rb(b))
// 		rr(a, b);
// 	else if (is_needed_sa(a) && b->next && is_needed_sb(b))
// 		ss(a, b);
// 	else if (is_needed_rra(a))
// 		rra(a);
// 	else if (b->next && is_needed_rrb(b))
// 		rrb(b);
// 	else if (is_needed_ra(a))
// 		ra(a);
// 	else if (b->next && is_needed_rb(b))
// 		rb(b);
// 	else if (is_needed_sa(a))
// 		sa(a);
// 	else if (b->next && is_needed_sb(b))
// 		sb(b);
// 	else if ((ft_lstsize(a) > 1 && !is_sorted_a(a)) || (a && !is_sorted_a(a)))
// 		pb(a, b);
// 	else if ((b->next && ft_lstsize(a) != b->n) || (b->next && !is_sorted_b(b)))
// 		pa(a, b);
// 	else if (b->next)
// 		pa(a, b);
// 	else if (a)
// 		pb(a, b);
// 	if (a && is_sorted_a(a) && ft_lstsize(a) == b->n)
// 	{
// 		print_stack(a);
// 		exit(0);
// 	}
// 	ft_sort_stack(a, b);
// }

//-2147483648-2147483647

// void	ft_sort_stack(t_stack *a, t_stack *b)
// {
// 	if (is_needed_rra(a) && b->next && is_needed_rrb(b))
// 		rrr(a, b);
// 	else if (is_needed_ra(a) && b->next && is_needed_rb(b))
// 		rr(a, b);
// 	else if (is_needed_sa(a) && b->next && is_needed_sb(b))
// 		ss(a, b);
// 	else if (is_needed_sa(a))
// 		sa(a);
// 	else if (b->next && is_needed_sb(b))
// 		sb(b);
// 	else if (is_needed_rra(a))
// 		rra(a);
// 	else if (b->next && is_needed_rrb(b))
// 		rrb(b);
// 	else if (is_needed_ra(a))
// 		ra(a);
// 	else if (b->next && is_needed_rb(b))
// 		rb(b);
// 	else if (ft_lstsize(a) > 1 && !is_sorted_a(a))
// 		pb(a, b);
// 	else if (b->next && ft_lstsize(a) != b->n)
// 		pa(a, b);
// 	if (is_sorted_a(a) && ft_lstsize(a) == b->n)
// 	{
// 		print_stack(a);
// 		exit(0);
// 	}
// 	ft_sort_stack(a, b);
// }

void	ft_sort_stack(t_stack *a, t_stack *b)
{
	if (is_needed_sa(a) && b->next && is_needed_sb(b))
		ss(a, b);
	else if (is_needed_ra(a) && b->next && is_needed_rb(b))
		rr(a, b);
	else if (is_needed_rra(a) && b->next && is_needed_rrb(b))
		rrr(a, b);
	else if (is_needed_sa(a))
		sa(a);
	else if (b->next && is_needed_sb(b))
		sb(b);
	else if (is_needed_rra(a))
		rra(a);
	else if (b->next && is_needed_rrb(b))
		rrb(b);
	else if (is_needed_ra(a))
		ra(a);
	else if (b->next && is_needed_rb(b))
		rb(b);
	else if (ft_lstsize(a) > 1 && !is_sorted_a(a))
		pb(a, b);
	else if (b->next && ft_lstsize(a) != b->n)
		pa(a, b);
	if (is_sorted_a(a) && ft_lstsize(a) == b->n)
	{
		print_stack(a);
		exit(0);
	}
	ft_sort_stack(a, b);
}
void	ft_sort_stack_a(t_stack *a)
{
	if (is_needed_sa(a))
	{
		sa(a);
		ft_sort_stack_a(a);
	}
	else if (is_needed_rra(a))
	{
		rra(a);
		ft_sort_stack_a(a);
	}
	else if (is_needed_ra(a))
	{
		ra(a);
		ft_sort_stack_a(a);
	}
	return ;
}
void	ft_sort_stack_b(t_stack *b)
{
	if (b->next && is_needed_sb(b))
	{
		sb(b);
		ft_sort_stack_b(b);
	}
	else if (b->next && is_needed_rrb(b))
	{
		rrb(b);
		ft_sort_stack_b(b);
	}
	else if (b->next && is_needed_rb(b))
	{
		rb(b);
		ft_sort_stack_b(b);
	}
	return ;
}
// void	ft_sort_stack(t_stack *a, t_stack *b)
// {
// 	if (is_needed_sa(a) || (b->next && is_needed_sb(b)))
// 	{
// 		if (is_needed_sa(a) && b->next && is_needed_sb(b))
// 			ss(a, b);
// 		if (is_needed_sa(a))
// 			sa(a);
// 		if (b->next && is_needed_sb(b))
// 			sb(b);
// 	}
// 	else if (is_needed_rra(a) || (b->next && is_needed_rrb(b)))
// 	{
// 		if (is_needed_rra(a) && b->next && is_needed_rrb(b))
// 			rrr(a, b);
// 		if (is_needed_rra(a))
// 			rra(a);
// 		if (b->next && is_needed_rrb(b))
// 			rrb(b);
// 	}
// 	else if (is_needed_ra(a) || (b->next && is_needed_rb(b)))
// 	{
// 		if (is_needed_ra(a) && b->next && is_needed_rb(b))
// 			rr(a, b);
// 		if (is_needed_ra(a))
// 			ra(a);
// 		if (b->next && is_needed_rb(b))
// 			rb(b);
// 	}
// 	else if (is_sorted_a(a) && ft_lstsize(a) == b->n)
// 	{
// 		print_stack(a);
// 		exit(0);
// 	}
// 	else if (is_sorted_a(a) && is_sorted_b(b))
// 		pa(a, b);
// 	else if (a && !is_sorted_a(a))
// 		pb(a, b);
// 	else if (b->next)
// 		pa(a, b);
// 	ft_sort_stack(a, b);
// }

// void	ft_sort_stack(t_stack *a, t_stack *b)
// {
// 	if (is_needed_sa(a) && b->next && is_needed_sb(b))
// 		ss(a, b);
// 	else if (is_needed_sa(a))
// 		sa(a);
// 	else if (b->next && is_needed_sb(b))
// 		sb(b);
// 	else if (is_needed_rra(a) && b->next && is_needed_rrb(b))
// 		rrr(a, b);
// 	else if (is_needed_rra(a))
// 		rra(a);
// 	else if (b->next && is_needed_rrb(b))
// 		rrb(b);
// 	else if (is_needed_ra(a) && b->next && is_needed_rb(b))
// 		rr(a, b);
// 	else if (is_needed_ra(a))
// 		ra(a);
// 	else if (b->next && is_needed_rb(b))
// 		rb(b);
// 	else if (ft_lstsize(a) > 1 && !is_sorted_a(a))
// 		pb(a, b);
// 	else if (b->next && ft_lstsize(a) != b->n)
// 		pa(a, b);
// 	if (is_sorted_a(a) && ft_lstsize(a) == b->n)
// 	{
// 		print_stack(a);
// 		exit(0);
// 	}
// 	ft_sort_stack(a, b);
// }

// void	ft_sort_stack(t_stack *a, t_stack *b)
// {
// 	if (is_needed_sa(a) && b->next && is_needed_sb(b))
// 		ss(a, b);
// 	else if (is_needed_sa(a))
// 		sa(a);
// 	else if (b->next && is_needed_sb(b))
// 		sb(b);
// 	else if (is_needed_rra(a) && b->next && is_needed_rrb(b))
// 		rrr(a, b);
// 	else if (is_needed_rra(a))
// 		rra(a);
// 	else if (b->next && is_needed_rrb(b))
// 		rrb(b);
// 	else if (is_needed_ra(a) && b->next && is_needed_rb(b))
// 		rr(a, b);
// 	else if (is_needed_ra(a))
// 		ra(a);
// 	else if (b->next && is_needed_rb(b))
// 		rb(b);
// 	else if (!is_sorted_a(a))
// 		pb(a, b);
// 	else if (is_sorted_a(a) && ft_lstsize(a) != b->n && is_sorted_b(b))
// 		pa(a, b);
// 	if (is_sorted_a(a) && ft_lstsize(a) == b->n)
// 	{
// 		print_stack(a);
// 		exit(0);
// 	}
// 	ft_sort_stack(a, b);
// }

// void	ft_sort_stack(t_stack *a, t_stack *b)
// {
// 	if (is_needed_rra(a) && b->next && is_needed_rrb(b))
// 		rrr(a, b);
// 	else if (is_needed_rra(a))
// 		rra(a);
// 	else if (b->next && is_needed_rrb(b))
// 		rrb(b);
// 	else if (is_needed_ra(a) && b->next && is_needed_rb(b))
// 		rr(a, b);
// 	else if (is_needed_sa(a) && b->next && is_needed_sb(b))
// 		ss(a, b);
// 	else if (is_needed_ra(a))
// 		ra(a);
// 	else if (b->next && is_needed_rb(b))
// 		rb(b);
// 	else if (is_needed_sa(a))
// 		sa(a);
// 	else if (b->next && is_needed_sb(b))
// 		sb(b);
// 	else if (!is_sorted_a(a))
// 		pb(a, b);
// 	else if (is_sorted_a(a) && ft_lstsize(a) != b->n && is_sorted_b(b))
// 		pa(a, b);
// 	if (is_sorted_a(a) && ft_lstsize(a) == b->n)
// 	{
// 		print_stack(a);
// 		exit(0);
// 	}
// 	ft_sort_stack(a, b);
// }