/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:04:49 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 20:28:58 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

#include <unistd.h>
#include <stdio.h>
int main()
{

	//ISALPHA
	printf(" ! :%d\n", ft_isalpha(33));
	printf(" J :%d\n", ft_isalpha(74));
	printf(" t :%d\n", ft_isalpha(116));
}