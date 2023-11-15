/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:01:08 by scely             #+#    #+#             */
/*   Updated: 2023/11/15 11:42:12 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    lst = ft_lstlast(*lst);
    lst->next = new;
    lst = new;
    
}

/*int main()
{
    t_list *l = lstnew(ft_strdup("nyacat"));
	t_list *n = lstnew(ft_strdup("OK"));

    
}*/