/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:07:45 by scely             #+#    #+#             */
/*   Updated: 2024/01/10 11:08:56 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free (tab);
}
