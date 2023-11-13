/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:13:29 by scely             #+#    #+#             */
/*   Updated: 2023/11/13 19:29:34 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlen(const char *s)
{
	int		i;
	char	*new;
	int		i;
	int		j;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	i = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(char) * i + 1);
	if (!new)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		new[j] = s2[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return ((char *)new);
}

/*
int	main(void)
{
	char *d =  "Je m'appel, ";
	char *c = "Samuel.";
	char *e;

	e = ft_strjoin(d,c);
	printf("%s", e);
	free(e);
}*/
