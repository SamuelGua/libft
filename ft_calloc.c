/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:34:34 by scely             #+#    #+#             */
/*   Updated: 2023/11/12 14:01:58 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*d;
	size_t 		i;
	size_t 		j;

	if ((count < 0 || size < 0))
		return (0);
	else
		j = count * size;
	i = 0;
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
