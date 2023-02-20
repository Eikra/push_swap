/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:16:17 by iecharak          #+#    #+#             */
/*   Updated: 2023/02/20 13:27:10 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct push_swap
{
	int		n;
	int		index;
	int		size;
	void	*next;
}			t_stack;

typedef struct test_args
{
	int		*n;
	int		size;
}			t_tab;

int			ft_printf(const char *s, ...);
int			ft_putchar_l(char c);
int			ft_putnbr_l(int n);
int			ft_putstr_l(char *s);
int			is_num_args(char **av);
char		*ft_list_num(char **av, int ac);
void		sign_err(char *nums);
void		ft_err(void);
int			ft_issign(char c);
int			ft_printf(const char *s, ...);
int			ft_atoi(const char *str);
size_t		count_word(char const *s, int c);
char		*word_split(char const *s, int start, int end);
char		**ft_free(char **s, int i);
char		**ft_spliter(char **tab, char const *s, char c);
char		**ft_split(char const *s, char c);
size_t		ft_strlen(const char *s);
t_tab		*fill_test_intgrs(char **tab);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_substr_ft(char *substr, char const *s, unsigned int start,
				size_t sub_len);
char		*ft_strchr(const char *s, int c);
t_stack		*ft_sorting(t_tab *t);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack		*ft_lstnew(int nbr);
t_stack		*ft_lstlast(t_stack *lst);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		sss(t_stack **s);
void		ft_lstdelone(t_stack *lst);
void		ss(t_stack **a, t_stack **b);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		rs(t_stack *s);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrsb(t_stack *s);
void		rsb(t_stack *s);
void		rrr(t_stack **a, t_stack **b);
void		rrs(t_stack *s);
int			ft_lstsize(t_stack *lst);
int			is_repeated(t_tab *a);
void		push_swap(t_stack *a, int size);
int			is_needed_sa(t_stack *a);
int			is_needed_sb(t_stack *b);
int			is_needed_ra(t_stack *a);
int			is_needed_rra(t_stack *a);
int			is_sorted_a(t_stack *a);
int			is_needed_rb(t_stack *b);
int			is_needed_sb(t_stack *b);
int			is_needed_rrb(t_stack *b);
int			is_sorted_b(t_stack *b);
void		ft_sort_three_a(t_stack *a, t_stack *b);
void		ft_sort_five(t_stack *a, t_stack *b);
void		ft_sort_stack(t_stack **a, t_stack **b, int size);
void		print_stack(t_stack *a);
void		ft_sort_stack_b(t_stack *b);
void		ft_sort_three_b(t_stack *a, t_stack *b);

#endif