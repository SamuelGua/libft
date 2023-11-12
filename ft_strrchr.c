/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:59:49 by scely             #+#    #+#             */
/*   Updated: 2023/11/12 13:40:06 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			len;
	const char	*d;

	i = 0;
	len = 0;
	while (s[i])
	{

		if (s[i] == c)
			{
				d = &s[i];
				len++;
			}
		i++;
	}
	if (len == 0)
		return ((char *)&s[i]);
	else
		return ((char *)d);
}
