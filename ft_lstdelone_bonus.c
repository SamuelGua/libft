/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:17:48 by samuelcely        #+#    #+#             */
/*   Updated: 2023/11/15 21:23:19 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst == NULL || del == NULL)
        return ((void) NULL);
    else if (lst != NULL)
    {
        del(lst->content);
        free(lst);
    }
}