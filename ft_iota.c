/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iota.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:46:39 by scely             #+#    #+#             */
/*   Updated: 2023/11/12 08:11:53 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nulen(int o)
{
	int	i;

	i = 0;
	while (o != 0)
	{
		o /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;

	i = ft_nulen(n);
	if (n > 0)
		new = malloc(sizeof(char) * i + 1);
	else
	{
		new = malloc(sizeof(char) * i + 2);
		n *= -1;
		new[0] = '-';
		i++;
	}
	if (!new)
		return (0);
	new[i] = '\0';
	while (n > 0)
	{
		i--;
		new[i] = n % 10 + '0';
		n /= 10;
	}
	return (new);
}
