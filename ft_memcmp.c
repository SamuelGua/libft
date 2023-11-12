/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:28:32 by scely             #+#    #+#             */
/*   Updated: 2023/11/12 16:53:49 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned int	diff;
	const char *d;
	const char *e;

	i = 0;
	d = s1;
	e = s2;
	if (n == 0)
		return (0);
	while (d[i] && e[i] && i < n - 1 && d[i] == e[i])
		i++;
	diff = d[i] - e[i];
	return (diff);
}

/*int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	diff;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}*/

int main()
{
	char s[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	
	printf("%d\n",ft_memcmp(s,s2, 1));
	printf("0 - (-128) :%d\n", (0 - (-128)));
	printf("(-128) - 0 :%d", ((-128) - 0));

}