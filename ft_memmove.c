/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:14:24 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 10:18:54 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>


void *ft_memmove(void *dest, const void *src, unsigned int n)
{
    while ( n > 0)
    {
        
    }
}


int main()
{
    char dest[7] = "Jarryp";
    char src[9] = "LoLPoP89";
    memcpy(dest, src, 8);
    printf("%s\n", dest);

    char des[7] = "Jarryp";
    char sr[9] = "LoLPoP89";
    memmove(des, sr, 8);
    printf("%s", des);
}