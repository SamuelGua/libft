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

int    ft_strlen_split(const char *s, char c)
{
    int    i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

int     count_words(char const *s, char c)
{
    int i;
    int nb_words;

    i = 0;
    nb_words = 0;
    if (s[0] != c)
        nb_words++;
    while(s[i])
    {
        if ((s[i] == c && s[i + 1] != c) && s[i + 1] != '\0')
            nb_words++;
        i++;
    }
    return (nb_words);
}

char **ft_split(char const *s, char c)
{
    char **new;
    int i;
    int k;
    int j;

    j = 0;
    k = 0;
// Partie 1 Malloc lv 1
    i = count_words(s, c);
    new = malloc(sizeof(char *) * (i + 1));
    if (!new)
        return (0);
    new[i] = (char *)'\0';
    //new[i] = (char*)'\0'; 
     // Ne pas oublier de mettre le nul a la fin. lv 2 surement
// Partie 2 Malloc lv 2
    i = 0;
    while(s[i])
    {
        k = 0;
        if (s[i] != c && s[i])
            {
                k = ft_strlen_split(&s[i], c);
                new[j++] = malloc(sizeof(char) * k + 1);
                new[j - 1][k] = '\0';
                if (!new)
                    return NULL;
                i += k;
            } 
            else
            i++;
    }
// Partie 3 Copier coller
    j = 0;
    i = 0;
    while (s[i])
       {
        if (s[i] == c)
            i++;
        k = 0;
        while (s[i] != c && s[i])
        {
            new[j][k++] = s[i];
            i++;
            if (s[i] == c)
                j++;
        }
       }
      
       return(new);
}
int main()
{
    char *d = "OR.I..GAMI";
    char **new = ft_split(d, '.');
    // char **c = ft_split(d, ',');
    printf("%s", new[2]);
    //free(new);
}