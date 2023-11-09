/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:01:43 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 17:41:17 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_len(char str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char dest, char src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_len;

	str_len = ft_str_len(dest);
	i = 0;
	while ((i + str_len + 1) < size && src[i])
	{
		dest[str_len + i] = src[i];
		i++;
	}
	dest[str_len + i] = '\0';
	if (size < str_len)
		return (size + ft_str_len(src));
	else
		return (str_len + ft_str_len(src));
}
/*
int    main()
{
    char d[10] = "origami";
    char s[10] = "master";
    printf("%d", ft_strlcat(d, s, 9));
    return(0);
}*/
