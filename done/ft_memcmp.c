/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:28:32 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 17:30:58 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	int	i;

	i = 0;
	while (n > 0 && *(char *)s1 == *(char *)s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(char *)s1 - *(char *)s2);
}

/*
int main()
{
    char *s1 = "JAnvier";
    char *s2 = "JAnvier";
    int c = 5;

    printf("%d\n", ft_memcmp(s1, s2, c));
    printf("%d", memcmp(s1, s2, c));
}*/
