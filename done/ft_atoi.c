/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:09:39 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 17:19:47 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *c)
{
	int	i;
	int	res;
	int	minus;

	i = 0;
	res = 0;
	minus = 1;
	while (c[i] == 32 || (c[i] >= 9 && c[i] <= 13))
		i++;
	if (c[i] == 45)
	{
		i++;
		minus = -1;
	}
	else if (c[i] == 43)
		i++;
	while (c[i] >= 48 && c[i] <= 57)
	{
		res = 10 * res + (c[i] - '0');
		i++;
	}
	return (res * minus);
}

/*int main()
{
    printf("%d",ft_atoi(" -5i4"));
}*/
