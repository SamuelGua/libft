/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:14:24 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 21:09:53 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *dest2;
    char *src2;
    unsigned int  i;
    
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