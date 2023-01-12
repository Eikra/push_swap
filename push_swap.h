/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:16:17 by iecharak          #+#    #+#             */
/*   Updated: 2023/01/12 19:42:20 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct push_swap
{
	int		n;
	void	*next;
}			stack;

int			ft_printf(const char *s, ...);
int			ft_putchar_l(char c);
int			ft_putnbr_l(int n);
int			ft_putstr_l(char *s);
int			is_num_args(char **av);
char		*ft_list_num(char **av);
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
stack       *fill_sort_stack(char **tab);
