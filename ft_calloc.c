/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:34:34 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 21:08:38 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*d;
	int		i;
	int		j;

	i = 0;
	j = count * size;
	d = malloc(j);
	if (d == 0)
		return (0);
	while (j > 0)
	{
		d[i] = '\0';
		j--;
		i++;
	}
	return ((void *)d);
}