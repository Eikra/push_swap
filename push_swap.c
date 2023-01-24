/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:15:53 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/23 12:18:35 by iecharak         ###   ########.fr       */
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
	// printf("test%d", l);
	return (l);
}

int	main(int ac, char **av)
{
	t_tab	*t_a;
	t_stack	*a;
	t_stack	*b;
	t_stack	*head;
	char	*nums;
	char	**tab;

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
	head = a;
	while (head)
	{
		ft_printf("%d/", head->n);
		head = head->next;
	}
	printf("\n");
	b = ft_lstnew(t_a->size);
	
	// if(t_a->size == 3)
	// 	ft_sort_three(a);
	// else 
	// 	ft_sort_stack(a,b);
	ft_sort_five(a, b);
	//a = head;
	// pb(a, b);
	// pb(a, b);
	// pb(a,b);
	// 	head = b;
	// while (head)
	// {
	// 	ft_printf("n: %d   ", head->n);
	// 	head = head->next;
	// }
	// printf("\n");
	// rrb(b);
	// while (a)
	// {
	// 	ft_printf("n: %d   ", a->n);
	// 	a = a->next;
	// }
}