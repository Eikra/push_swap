/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:45:20 by iecharak          #+#    #+#             */
/*   Updated: 2023/02/11 13:22:10 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_a(t_stack *a)
{
	t_stack	*t;
	t_stack	*s;

	t = a;
	while (t)
	{
		s = t->next;
		if (s && t->n > s->n)
			return (0);
		t = t->next;
	}
	return (1);
}
