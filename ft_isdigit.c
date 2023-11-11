/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:34:21 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 20:29:12 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

#include <unistd.h>
#include <stdio.h>
int main()
{
	//ISDIGIT
	printf(" / :%d\n", ft_isdigit(47));
	printf(" J :%d\n", ft_isdigit(74));
	printf(" 9 :%d\n", ft_isdigit(57));

}