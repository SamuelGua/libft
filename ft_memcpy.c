/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:39:33 by scely             #+#    #+#             */
/*   Updated: 2023/11/07 17:27:47 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d;
    char *s;
    int i;

    i = 0;
    d = dest;
    s = (char * )src;
    while (n > 0)
    {
        d[i] = s[i];
        i++;
        n--;
    }
    return(dest);
}*/

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    while (n > 0)
    {
        *(char *)dest = *(char *)src;
        dest++;
        src++;
        n--;
    }
    return(dest);
}

int main()
{
    char s[6] = "trans";
    char *c = "WAPWQPPO";

    ft_memcpy(s, c, 8);
    printf("%s\n", s);

    char b[6] = "trans";
    char *r = "WAPWQPPO";
    memcpy(b, r, 8);
    printf("%s", b);
}