/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:59:56 by scely             #+#    #+#             */
/*   Updated: 2023/11/13 19:29:21 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*d;
	char		c2;

	c2 = c;
	i = 0;
	while (s[i] != c2 && s[i])
		i++;
	if (s[i] != c2)
		return (0);
	d = &s[i];
	return ((char *)d);
}

/*
int	main(void)
{
	printf("%s", ft_strchr("OK for now", 'o'));
}*/
