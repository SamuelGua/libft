/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuelcely <samuelcely@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:01:08 by scely             #+#    #+#             */
/*   Updated: 2023/11/15 17:32:07 by samuelcely       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(*lst == NULL)
        *lst = new;
    
    t_list *liste;
    
    liste = *lst;
    liste = ft_lstlast(liste);
    liste->next = new;
    new->next = NULL;
    

}
