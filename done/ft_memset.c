/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:57:39 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 17:33:13 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = s;
	while (n > 0)
	{
		*p = (char)c;
		n--;
		p++;
	}
	return (s);
}

/*
int main()
{
    char s[9] = "transport";

    int c = 46;
    printf("%s\n", s);
    ft_memset(s, c, 3);
    printf("%s", s);
}*/
