/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:56:40 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 17:28:46 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*d;

	while (n > 0)
	{
		if (c == *(char *)s)
			return ((char *)s);
		s++;
		n--;
	}
	return (0);
}

/*
#include <string.h>
int main()
{
    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    printf("%p\n", ft_memchr(data, 20, 10));
    printf("%p", memchr(data, 20, 10));

}*/
