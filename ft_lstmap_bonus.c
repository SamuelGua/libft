/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:28:36 by scely             #+#    #+#             */
/*   Updated: 2023/11/16 12:12:12 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*=================================*/
// int ft_lstsize(t_list *lst)
// {
//     int i;

//     i = 0;
//     while (lst != NULL)
//     {
//         i++;
//         lst = lst->next; 
//     }
//     return (i);
// }
/*=================================*/

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    int i;
    t_list *lstbis;
    t_list *temp;

    i = ft_lstsize(lst);
    lstbis = malloc(sizeof(lst) * i);
    temp = malloc(sizeof(lst));
    if (!del)
        return (lst);
    while (lst != NULL)
    {
        temp->content = ft_lstnew(f(lst));
        if (temp->content == NULL)
            del(lstbis->content);
        lstbis->content = temp->content;
        lst = lst->next;
        lstbis = lstbis->next;   
    }
    return (lst);
}