/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:56:36 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/21 13:25:40 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int		size;
	t_stack	*ptr;

	//ft_printf("test");
	size = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	return (size);
}

// void	rrs(t_stack *s)
// {
// 	int		*tab;
// 	t_stack	*temp;
// 	int		i;

// 	i = 0;
// 	temp = s;
// 	tab = malloc(sizeof(int) * ft_lstsize(temp));
// 	temp = s;
// 	while (temp)
// 	{
// 		tab[i] = temp->n;
// 		temp = temp->next;
// 		i++;
// 	}
// 	temp = s;
// 	temp->n = tab[--i];
// 	temp = temp->next;
// 	i = 0;
// 	while (temp)
// 	{
// 		temp->n = tab[i];
// 		temp = temp->next;
// 		i++;
// 	}
// 	free(tab);
// }

void	rrs(t_stack *s)
{
	int		*tab;
	t_stack	*temp;
	int		swap;
	int		i;

	i = 0;
	temp = s;
	tab = malloc(sizeof(int) * ft_lstsize(temp));
	temp = s;
	while (temp)
	{
		tab[i] = temp->n;
		temp = temp->next;
		i++;
	}
	swap = tab[0];
	temp = s;
	i = 1;
	while (temp)
	{
		temp->n = tab[i];
		if (temp->next == NULL)
			break ;
		temp = temp->next;
		i++;
	}
	temp->n = swap;
	free(tab);
}

void	rrsb(t_stack *s)
{
	int		*tab;
	t_stack	*temp;
	int		swap;
	int		i;

	i = 0;
	temp = s;
	tab = malloc(sizeof(int) * ft_lstsize(temp));
	temp = s;
	while (temp)
	{
		tab[i] = temp->n;
		temp = temp->next;
		i++;
	}
	swap = tab[1];
	temp = s->next;
	i = 2;
	while (temp)
	{
		temp->n = tab[i];
		if (temp->next == NULL)
			break ;
		temp = temp->next;
		i++;
	}
	temp->n = swap;
	free(tab);
}

void	rs(t_stack *s)
{
	int		*tab;
	t_stack	*temp;
	int		i;

	i = 0;
	temp = s;
	tab = malloc(sizeof(int) * ft_lstsize(temp));
	temp = s;
	while (temp)
	{
		tab[i] = temp->n;
		temp = temp->next;
		i++;
	}
	temp = s;
	temp->n = tab[--i];
	temp = temp->next;
	i = 0;
	while (temp)
	{
		temp->n = tab[i];
		temp = temp->next;
		i++;
	}
	free(tab);
}


void	rsb(t_stack *s)
{
	int		*tab;
	t_stack	*temp;
	int		i;

	i = 0;
	temp = s;
	tab = malloc(sizeof(int) * ft_lstsize(temp));
	temp = s;
	while (temp)
	{
		tab[i] = temp->n;
		temp = temp->next;
		i++;
	}
	temp = s->next;
	temp->n = tab[--i];
	temp = temp->next;
	i = 1;
	while (temp)
	{
		temp->n = tab[i];
		temp = temp->next;
		i++;
	}
	free(tab);
}

void	sss(t_stack *s)
{
	t_stack	*t;
	t_stack	*temp;
	int		swap;

	t = s;
	while (t)
	{
		temp = t->next;
		if (temp->next == NULL)
		{
			swap = t->n;
			t->n = temp->n;
			temp->n = swap;
			return ;
		}
		t = t->next;
	}
}

void	ft_lstdelone(t_stack *lst)
{
	if (lst)
	{
		free(lst);
		lst = NULL;
	}
}