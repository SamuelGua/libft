/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:56:16 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 16:40:08 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (0);
	while (len > 0)
	{
		new[i] = s[start];
		i++;
		start++;
		len--;
	}
	new[i] = '\0';
	return (new);
}

// int main()
// {
//     char *d = "Janvier";
//     char *new = ft_substr(d, 3, 2);
//     printf("%s", new);
//     free(new);
// }