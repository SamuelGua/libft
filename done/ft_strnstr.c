/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:30:04 by samuelcely        #+#    #+#             */
/*   Updated: 2023/11/10 15:34:36 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
		i++;
	return (i);
}

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(needle);
	if (j == 0)
		return (haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && haystack[i + j])
			{
				j++;
				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}