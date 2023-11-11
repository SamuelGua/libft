/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:14:24 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 10:15:47 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>


void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *dest2;
    char *src2;
    int i;
    
    dest2 = (char *)dest;
    src2 = (char *)src;
    i = 0;
    if (dest2 > src2)
    {
        while ( n > 0)
        {
            n--;
            dest2[n] = src2[n];
        }
    }
    else
    {
         while ( i < n)
        {
            dest2[i] = src2[i];
            i++;
        } 
    }
    return (dest2);
}

int main()
{
    char s[10] = "trans";
    char *c = "WAPWQPPO";

    ft_memmove(s, c, 4);
    printf("%s\n", s);

    char b[10] = "trans";
    char *r = "WAPWQPPO";
    memcpy(b, r, 4);
    printf("%s", b);
}