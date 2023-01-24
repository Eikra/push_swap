/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:08:54 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/19 23:43:33 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*s;

	s = *lst;
	if (s)
		ft_lstlast(s)->next = new;
	else
		s = new;
}

t_stack	*ft_lstnew(int nbr)
{
	t_stack	*a;

	a = malloc(sizeof(t_stack));
	if (!a)
		return (NULL);
	a->n = nbr;
	a->next = NULL;
	return (a);
}

// t_stack	*ft_sorting(t_tab *t)
// {
// 	t_stack	*a;
// 	t_stack	*head;
// 	int		i;

// 	//i = 1;
// 	head = ft_lstnew(t->n[0]);
// 	//printf("   %d\n", t->n[0]);
// 	a = head;
// 	i = 1;
// 	while (i < t->size)
// 	{
// 		ft_lstadd_back(&a, ft_lstnew(t->n[i]));
// 		//printf("   %d\n", t->n[i]);
// 		i++;
// 	}
// 	return (head);
// }

t_stack	*ft_sorting(t_tab *t)
{
	t_stack	*a;
	t_stack	*head;
	int		i;
	int		j;

	i = t->size - 1;
	j = 0;
	head = ft_lstnew(t->n[i]);
	a = head;
	while (--i >= 0)
	{
		ft_lstadd_back(&a, ft_lstnew(t->n[i]));
	}
	while ((a))
	{
		a->index = j;
		a->size = t->size - 1;
		j++;
		a = a->next;
	}
	return (head);
}
// stack	*fill_sort_stack(char **tab)
// {
// 	int		i;
// 	stack	*a;

// 	i = 1;
// 	a = ft_lstnew(ft_atoi(tab[0]));
// 	while (tab[i])
// 	{
//         ft_lstadd_back(&a, ft_lstnew(ft_atoi(tab[i])));
// 		i++;
// 	}
// 	return (a);
// }