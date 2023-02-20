#include "push_swap.h"
// void	ft_sort_stack(t_stack *a, t_stack *b)
// {
// 	// if(ft_lstsize(a)== 3)
// 	// 	ft_sort_three(a);
// 	// if(ft_lstsize(a)== 5)
// 	// 	ft_sort_five(a);
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