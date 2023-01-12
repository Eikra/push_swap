/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:15:53 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/12 20:58:31 by iecharak         ###   ########.fr       */
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

char	*ft_list_num(char **av)
{
	char	*list;
	int		i;
	int		j;
	int		k;

	list = malloc(sizeof(char) * is_num_args(av));
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
		i++;
	}
	list[k] = '\0';
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
	// printf("test%d", l);
	return (l);
}

int	main(int ac, char **av)
{
	stack *a;
	//stack   *b;
	char *nums;
	char **tab;
	//int i = 0;

	if (ac < 2)
	{
		exit(0);
		return (0);
	}
    //printf("test");
	nums = ft_list_num(av);
	sign_err(nums);
	tab = ft_split(nums, ' ');
    //printf("test");
    a= fill_sort_stack(tab);
	while (a)
	{
		ft_printf("%dtest\n", a->n);
		a= a->next;
	}
}