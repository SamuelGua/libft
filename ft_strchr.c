/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:59:56 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 17:34:59 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
