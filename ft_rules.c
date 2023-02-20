/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:07:48 by iecharak          #+#    #+#             */
/*   Updated: 2023/02/11 20:48:09 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int		size;
	t_stack	*ptr;

	size = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	return (size);
}
void	sa(t_stack **a)
{
	t_stack	*temp;

	temp = (*a);
	if (ft_lstsize(temp) > 1)
	{
		(*a) = (*a)->next;
		temp->next = (*a)->next;
		(*a)->next = temp;
		ft_printf("sa\n");
	}
}

void	sb(t_stack **b)
{
	t_stack	*temp;

	temp = (*b);
	if (ft_lstsize(temp) > 1)
	{
		(*b) = (*b)->next;
		temp->next = (*b)->next;
		(*b)->next = temp;
		ft_printf("sb\n");
	}
}

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = (*a);
	temp_b = (*b);
	if (ft_lstsize(temp_a) > 1 && ft_lstsize(temp_b) > 1)
	{
		(*a) = (*a)->next;
		temp_a->next = (*a)->next;
		(*a)->next = temp_a;
		(*b) = (*b)->next;
		temp_b->next = (*b)->next;
		(*b)->next = temp_b;
		ft_printf("ss\n");
	}
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	temp = (*b)->next;
	(*b)->next = (*a);
	(*a) = (*b);
	(*b) = temp;
	ft_printf("pa\n");
}
void	pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	temp = (*a)->next;
	(*a)->next = (*b);
	(*b) = (*a);
	(*a) = temp;
	ft_printf("pb\n");
}

void	ra(t_stack **a)
{
	t_stack	*temp_a;

	temp_a = (*a);
	if (ft_lstsize(temp_a) > 1)
	{
		(*a) = (*a)->next;
		temp_a->next = NULL;
		ft_lstadd_back(a, temp_a);
		ft_printf("ra\n");
	}
}

void	rb(t_stack **b)
{
	t_stack	*temp_b;

	temp_b = (*b);
	if (ft_lstsize(temp_b) > 1)
	{
		(*b) = (*b)->next;
		temp_b->next = NULL;
		ft_lstadd_back(b, temp_b);
		ft_printf("rb\n");
	}
}

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = (*a);
	temp_b = (*b);
	if (ft_lstsize(temp_a) > 1 && ft_lstsize(temp_b) > 1)
	{
		(*a) = (*a)->next;
		temp_a->next = NULL;
		ft_lstadd_back(a, temp_a);
		(*b) = (*b)->next;
		temp_b->next = NULL;
		ft_lstadd_back(b, temp_b);
		ft_printf("rr\n");
	}
}

void	rra(t_stack **a)
{
	t_stack	*temp;
	t_stack	*temp_a;

	if (ft_lstsize((*a)) > 1)
	{
		temp = (*a);
		while (temp)
		{
			temp_a = temp->next;
			if (temp_a->next == NULL)
			{
				temp->next = NULL;
				ft_lstadd_front(a, temp_a);
				break ;
			}
			temp = temp->next;
		}
		ft_printf("rra\n");
	}
}

void	rrb(t_stack **b)
{
	t_stack	*temp;
	t_stack	*temp_b;

	if (ft_lstsize((*b)) > 1)
	{
		temp = (*b);
		while (temp)
		{
			temp_b = temp->next;
			if (temp_b->next == NULL)
			{
				temp->next = NULL;
				ft_lstadd_front(b, temp_b);
				break ;
			}
			temp = temp->next;
		}
		ft_printf("rrb\n");
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	t_stack	*temp_a;
	t_stack	*temp_b;

	if (ft_lstsize((*a)) > 1 && ft_lstsize((*b)) > 1)
	{
		temp = (*a);
		while (temp)
		{
			temp_a = temp->next;
			if (temp_a->next == NULL)
			{
				temp->next = NULL;
				ft_lstadd_front(a, temp_a);
				break ;
			}
			temp = temp->next;
		}
		temp = (*b);
		while (temp)
		{
			temp_b = temp->next;
			if (temp_b->next == NULL)
			{
				temp->next = NULL;
				ft_lstadd_front(b, temp_b);
				break ;
			}
			temp = temp->next;
		}
		ft_printf("rrr\n");
	}
}
