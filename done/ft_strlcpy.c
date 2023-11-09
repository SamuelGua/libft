/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:00:48 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 17:49:54 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlcpy(char dest, char src, unsigned int size)
{
	int	i;

	i = 0;
	while (i != size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
    char s[10] = "origami";
    char c[10] = "maste";
    printf("%s", ft_strlcpy(s, c, 6));
    return (0);
}*/
