/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:29:10 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 00:01:29 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int find_start(char const *s1, char const * set)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while()

            if (set[k])
                return (i);
    /*while (s1[i])
        {
            k = 0;
            if (s1[i] == set[k])
                {
                i++;
                k++;    
                }
                else
                    return (i);
        }
        return (i);*/
}

int find_end(char const *s1, char const * set)
{
    int i;
    int k;
    int l;

    l = 0;
    i = ft_strlen(s1) - 1;
    while (s1[i])
        {
            k = 0;
            if (s1[i] == set[k])
                {
                i--;
                k++;
                l++;   
                }
                else
                    return (l);
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

int main()
{
    int i = 0;
    char *d = "__._J'ar_rive_.__";
    char *set = "_.";
    char *new;
    printf("%d\n", find_start(d,set));
    printf("%d\n", find_end(d,set));
    printf("%s", ft_strtrim(d, set));
}