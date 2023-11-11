/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:08:39 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 13:53:16 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = '\0';
	while (n > 0)
	{
		*(char *)s = i;
		n--;
		s++;
	}
	return ((void )s);
}

int main()
{
    char p[6] =  "froid";
    ft_bzero(p, 3);
    printf("j'arrive, j'ai %s\n", p);
    char c[6] =  "chaud";
    bzero(c, 1);
    printf("j'arrive, j'ai %s", c);

}
