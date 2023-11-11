/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:59:49 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 21:16:16 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*d;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			d = &s[i];
		i++;
	}
	return ((char *)d);
}
/*
int main()
{
    printf("%s", ft_strrchr("OK for now", 'K'));
}*/
