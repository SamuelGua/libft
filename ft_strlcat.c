/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:01:43 by scely             #+#    #+#             */
/*   Updated: 2023/11/14 13:10:35 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	str_len;

	if (dst == NULL && dstsize == 0)
		return (0);
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
