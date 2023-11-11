/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:51:42 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 13:46:45 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}


#include <unistd.h>
#include <stdio.h>
int main()
{
	//ISDIGIT
	printf(" 0 :%d\n", ft_isprint(0));
	printf(" J :%d\n", ft_isprint(74));
	printf(" 9 :%d\n", ft_isprint(57));
	printf(" ! :%d\n", ft_isprint(33));
	printf(" tidle :%d\n", ft_isprint(126));
	printf(" DEL :%d\n", ft_isprint(127));

}