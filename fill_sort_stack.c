/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sort_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:39:55 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/12 20:59:58 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack	*ft_lstlast(stack *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

void	ft_lstadd_back(stack **lst, stack *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
stack	*ft_lstnew(int nbr)
{
	stack	*a;

	a = malloc(sizeof(stack));
	if (!a)
		return (NULL);
	a->n = nbr;
	a->next = NULL;
	return (a);
}

stack	*fill_sort_stack(char **tab)
{
	int		i;
	stack	*a;

	i = 1;
	a = ft_lstnew(ft_atoi(tab[0]));
	while (tab[i])
	{
        ft_lstadd_back(&a, ft_lstnew(ft_atoi(tab[i])));
		i++;
	}
	return (a);
}

