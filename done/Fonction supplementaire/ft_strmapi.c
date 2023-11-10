/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:53:09 by scely             #+#    #+#             */
/*   Updated: 2023/11/09 11:33:25 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *d;
    int     i;
    int     len;

    while(s[len])
        len++;
    i = 0;
    d = malloc(sizeof(char) * len + 1);
    if (!d)
        return (0);
    while (s[i])
    {
        d[i] = f(i, s[i]);
        i++;
    }
    return (d);
}

// test
char addOne(unsigned int i, char c) 
{
    return (i + c);
}


int main()
{

	char * s = ft_strmapi("1234", addOne);
    printf("%s",s);
    free(s);
	return (0);
}