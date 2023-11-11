/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:06:04 by scely             #+#    #+#             */
/*   Updated: 2023/11/08 16:49:57 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	a;
	int	b;

	a = n % 10;
	b = n / 10;
	if (b)
	{
		ft_putnbr_fd(b, fd);
		if (n < 0)
		{
			if (!b)
				write(1, '-', 1);
			a = -a;
		}
		ft_putchar_fd((a + '0'), fd);
	}
}
