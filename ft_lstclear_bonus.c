/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:26:07 by samuelcely        #+#    #+#             */
/*   Updated: 2023/11/15 21:10:28 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current;
    t_list *after;
    
    current = *lst;
    while (current != NULL)
    {
        after = current->next;
        del(current->content);
        free(current);
        current = after;
    }
    *lst = NULL;
}
