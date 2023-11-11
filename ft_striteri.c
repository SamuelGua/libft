/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:29:16 by scely             #+#    #+#             */
/*   Updated: 2023/11/09 10:51:56 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void txt(unsigned int i, char *c)
{
    *c += i;
}



void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while (s[i])
        {
            f(i, s + i);
            i++;
        }
}

int main()
{
    char d[] = "0000000000";
    ft_striteri(d, txt);
    printf("%s",d);
    return (0);
}