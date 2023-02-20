/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:15:53 by iecharak          #+#    #+#             */
/*   Updated: 2023/02/20 13:28:27 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

void	ft_err(void)
{
	ft_printf("Error\n");
	exit(0);
}

void	sign_err(char *nums)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		if (ft_issign(nums[i]) && (ft_issign(nums[i + 1]) || nums[i
				+ 1] == '\0'))
			ft_err();
		i++;
	}
}

char	*ft_list_num(char **av, int ac)
{
	char	*list;
	int		i;
	int		j;
	int		k;

	list = malloc(sizeof(char) * (is_num_args(av) + ac - 2));
	if (!list)
		return (NULL);
	i = 1;
	k = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			list[k] = av[i][j];
			k++;
			j++;
		}
		list[k] = ' ';
		k++;
		i++;
	}
	list[k] = '\0';
	//printf("c:%d\n", ac);
	return (list);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	is_num_args(char **av)
{
	int	i;
	int	j;
	int	l;

	i = 1;
	l = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != ' ' && av[i][j] != '-'
				&& av[i][j] != '+')
			{
				ft_printf("Error\n");
				exit(0);
			}
			j++;
		}
		l += j;
		i++;
	}
	return (l);
}

void	ft_index_stack(t_tab *t)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < t->size)
	{
		j = i + 1;
		while ((j < t->size))
		{
			if (t->n[i] > t->n[j])
			{
				swap = t->n[i];
				t->n[i] = t->n[j];
				t->n[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	t_tab *t_a;
	t_stack *a;
	t_stack *b;
	char *nums;
	char **tab;

	b = NULL;
	if (ac < 2)
	{
		exit(0);
		return (0);
	}
	nums = ft_strtrim(ft_list_num(av, ac), " ");
	sign_err(nums);
	tab = ft_split(nums, ' ');
	t_a = fill_test_intgrs(tab);
	a = ft_sorting(t_a);
	ft_sort_stack(&a, &b, t_a->size);
}