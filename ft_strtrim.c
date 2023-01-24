/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iecharak <iecharak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:41:25 by iecharak          #+#    #+#             */
/*   Updated: 2022/11/01 23:03:53 by iecharak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    *ft_strchr(const char *s, int c)
{
    if ((char)c == 0)
        return ((char *)s + ft_strlen(s));
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    return (0);
}

char    *ft_substr_ft(char *substr, char const *s, unsigned int start,
        size_t sub_len)
{
    unsigned int    i;

    i = 0;
    while (i < sub_len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    sub_len;
    char    *substr;

    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
    {
        substr = malloc(sizeof(char) * 1);
        if (!substr)
            return (NULL);
        substr[0] = '\0';
        return (substr);
    }
    if (len > (ft_strlen(s) - start))
        sub_len = ft_strlen(s) - start;
    if (len <= (ft_strlen(s) - start))
        sub_len = len;
    substr = (char *)malloc(sub_len + 1);
    if (!substr)
        return (NULL);
    return (ft_substr_ft(substr, s, start, sub_len));
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	strtrim = ft_substr(s1, i, j - i + 1);
	return (strtrim);
}
