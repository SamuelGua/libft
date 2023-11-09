/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:42:55 by scely             #+#    #+#             */
/*   Updated: 2023/11/09 12:51:10 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
    int     i;
    int     j;
    int     k;
    char    **new;

    i = 0;
    j = 0;
    // creation du lv1
    while(s[i] != c)
    {
        if (s[i] != c)
            i++;
    }
    new = malloc(sizeof(char) * i);
    if (!new)
        return (0);
    //creation du lv2
    i = 0;
    while(s[i])
    {
        k = 0;
        while(s[i] != c)
            {
                i++;
                k++;
            }
        new[i][j] = malloc(sizeof(char) * k + 1);
        if (!new)
            return (0);
        j++;
    }
    // faire la copie

    


}

int main()
{
    char *d = "J'arrive,Demain,Bonjour";
    char **c = ft_split(d, ',');
    split(d,)

    int i = 0;
    while(*c[i])
    {
        printf("%s", c[i]);
    }

}