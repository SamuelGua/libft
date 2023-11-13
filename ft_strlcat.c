/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:01:43 by scely             #+#    #+#             */
/*   Updated: 2023/11/13 19:29:36 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;
	unsigned int	i;
	unsigned int	str_len;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	str_len = ft_strlen(dst);
	i = 0;
	while ((i + str_len + 1) < dstsize && src[i])
	{
		dst[str_len + i] = src[i];
		i++;
	}
	dst[str_len + i] = '\0';
	if (dstsize < str_len)
		return (dstsize + ft_strlen(src));
	else
		return (str_len + ft_strlen(src));
}
