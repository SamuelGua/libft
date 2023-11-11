/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:39:33 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 09:57:56 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    while (n > 0)
    {
        *(char *)dest = *(char *)src;
        dest++;
        src++;;
        n--;
    }
    return(dest);
}

int main()
{
    char s[10] = "trans";
    char *c = "WAPWQPPO";

    ft_memcpy(s, c, 4);
    printf("%s\n", s);

    char b[10] = "trans";
    char *r = "WAPWQPPO";
    memcpy(b, r, 4);
    printf("%s", b);
}