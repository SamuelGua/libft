/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:29:10 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 21:16:33 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

static int find_start(char const *s1, char const * set)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while(s1[i])
    {
            if (set[k] == '\0')
                return (i);
            else if (s1[i] == set[k])
            {
                i++;
                k = 0;
            }
            else
                k++;
    }
    return (i);
}

static int find_end(char const *s1, char const * set)
{
    int i;
    int k;
    int l;

    l = 0;
    k = 0;
    i = ft_strlen(s1) - 1;
    while(s1[i])
    {
            if (set[k] == '\0')
                return (l);
            else if (s1[i] == set[k])
            {
                i--;
                l++;
                k = 0;
            }
            else
                k++;
    }
    return (l);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int i;
    int k;
    char *new;

    start = find_start(s1, set);
    end = find_end(s1, set);
    i = ft_strlen(s1);
    k = 0;
    new = malloc(sizeof(char) * (i -(start + end)) + 1);
    if (!new)
        return (NULL);
    while (start < (i - end))
        {
            new[k] = s1[start];
            k++;
            start++; 
        }
        new[k] = '\0';
    return (new);
}