/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:41:58 by scely             #+#    #+#             */
/*   Updated: 2023/11/11 20:28:52 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

#include <unistd.h>
#include <stdio.h>
int main()
{
	//ISDIGIT
	printf(" / :%d\n", ft_isalnum(47));
	printf(" J :%d\n", ft_isalnum(74));
	printf(" 9 :%d\n", ft_isalnum(57));
	printf(" ! :%d\n", ft_isalnum(33));
	printf(" tidle :%d\n", ft_isalnum(126));
	printf(" t :%d\n", ft_isalnum(116));

}