/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:28:32 by scely             #+#    #+#             */
/*   Updated: 2023/11/13 19:28:54 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*d;
	const char	*e;

	i = 0;
	d = s1;
	e = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (d[i] != e[i])
			return (e[i] - d[i]);
		i++;
	}
	return (0);
}
