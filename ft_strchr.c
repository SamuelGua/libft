/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:59:56 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 20:30:31 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*d;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	d = &s[i];
	return ((char *)d);
}

/*
int main()
{
    printf("%s", ft_strchr("OK for now", 'o'));
}*/
