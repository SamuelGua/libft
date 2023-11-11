/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:59:49 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 17:47:18 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			j;
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
