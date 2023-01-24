#include "push_swap.h"

void	ft_sort_three_a(t_stack *a, t_stack *b)
{
	if (is_needed_sa(a))
	{
		if (is_needed_sb(b))
			ss(a, b);
		else
			sa(a);
	}
	if (is_needed_rra(a))
	{
		if (is_needed_rrb(b))
			rrr(a, b);
		else
			rra(a);
	}
	if (is_needed_ra(a))
	{
		if (is_needed_rb(b))
			rr(a, b);
		else
			ra(a);
	}
	if (is_sorted_a(a))
	{
		ft_printf("test\n");
		return ;
	}
	else
		ft_sort_three_a(a, b);
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
	}
	if (is_needed_rrb(b))
	{
		if (is_needed_rra(a))
			rrr(a, b);
		else
			rrb(b);
	}
	if (is_needed_rb(b))
	{
		if (is_needed_ra(a))
			rr(a, b);
		else
			rb(b);
	}
	if (is_sorted_b(b))
	{
		//print_stack(b);
		//ft_printf("test\n");
		return ;
	}
	else
		ft_sort_three_b(a, b);
	return ;
}

void	ft_sort_five(t_stack *a, t_stack *b)
{
	if (ft_lstsize(a) == 5)
	{
		pb(a, b);
		pb(a, b);
	}
	if (!is_sorted_a(a) && ft_lstsize(a) == 3)
		ft_sort_three_a(a, b);
	else
	{
		pb(a, b);
		if (!is_sorted_b(b))
			ft_sort_three_b(a, b);
	}
	ft_printf("test2");
	ft_sort_stack(a, b);
}
