/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:07:48 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/21 12:00:05 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	if (a)
	{
		sss(a);
		ft_printf("sa\n");
	}
}

void	sb(t_stack *b)
{
	if (b)
	{
		sss(b);
		ft_printf("sb\n");
	}
}

void	ss(t_stack *a, t_stack *b)
{
	if (a && b)
	{
		sss(a);
		sss(b);
		ft_printf("ss\n");
	}
}

void	pa(t_stack *a, t_stack *b)
{
	t_stack	*t;
	t_stack	*temp;
	t_stack	*swap;

	if (b)
	{
		t = b;
		swap = a;
		while (t)
		{
			temp = t->next;
			if (temp->next == NULL)
			{
				t->next = NULL;
				ft_lstadd_back(&swap, temp);
				break ;
			}
			t = t->next;
		}
		ft_printf("pa\n");
	}
}

void	pb(t_stack *a, t_stack *b)
{
	t_stack	*t;
	t_stack	*temp;

	if (a)
	{
		t = a;
		while (t)
		{
			temp = t->next;
			if (temp->next == NULL)
			{
				ft_lstadd_back(&b, ft_lstnew(temp->n));
				t->next = NULL;
				free(temp);
				break ;
			}
			t = t->next;
		}
		ft_printf("pb\n");
	}
}

void	ra(t_stack *a)
{
	if (a && a->next)
	{
		rs(a);
		ft_printf("ra\n");
	}
}

void	rb(t_stack *b)
{
	if (b)
	{
		rsb(b);
		ft_printf("rb\n");
	}
}

void	rr(t_stack *a, t_stack *b)
{
	if (a && b)
	{
		rs(a);
		rsb(b);
		ft_printf("rr\n");
	}
}

void	rra(t_stack *a)
{
	if (a)
	{
		rrs(a);
		ft_printf("rra\n");
	}
}

void	rrb(t_stack *b)
{
	if (b)
	{
		rrsb(b);
		ft_printf("rrb\n");
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	if (a && b)
	{
		rrs(a);
		rrs(b);
		ft_printf("rrr\n");
	}
}