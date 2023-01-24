/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_test_intgrs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:39:55 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/19 02:52:06 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_repeated(t_tab *a)
{
	int	i;
	int	j;

	if (a->size == 1)
		exit(0);
	i = 0;
	while (i < a->size - 1)
	{
		j = i + 1;
		while (j < a->size)
		{
			if (a->n[i] == a->n[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_sorted(t_tab *a)
{
	int	i;

	if (a->size == 1)
		exit(0);
	i = 0;
	while (i + 1 < a->size)
	{
		if (a->n[i] > a->n[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

t_tab	*fill_test_intgrs(char **tab)
{
	int		i;
	t_tab	*a;

	a = malloc(sizeof(t_tab));
	if (!a)
		return (NULL);
	a->size = 0;
	while (tab[a->size])
		a->size++;
	a->n = malloc(sizeof(int) * a->size);
	if (!a->n)
		return (NULL);
	i = 0;
	while (tab[i])
	{
		a->n[i] = ft_atoi(tab[i]);
		i++;
	}
	if (is_sorted(a))
		exit(0);
	if (is_repeated(a))
		ft_err();
	return (a);
}
