/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:34:34 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 17:24:27 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	char	*d;
	int		i;

	i = 0;
	d = malloc(count * sizeof(size));
	if (d == 0)
		return (0);
	while (size > 0)
	{
		d[i] = '\0';
		size--;
		i++;
	}
	return ((void *)d);
}


int main()
{
    char *d;
    char *c;

    d = ft_calloc(1, 4);
    //printf("%p", c);

    c = calloc(1, 4);
    printf("%p", c);
}
