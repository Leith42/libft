/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:17:17 by aazri             #+#    #+#             */
/*   Updated: 2016/11/09 14:19:56 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t i;

    i = 0;
    while(s != NULL && s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void func(unsigned int i, char *s)
{
    *s = 'k';
}

int main(int argc, char const *argv[])
{
    char str[999] = "Je suis une jolie phrase top kek jej lolasdolasodsadsakl";
    void (*kek)(unsigned int, char *) = &func;
    puts(str);
    ft_striteri(str, kek);
    puts(str);
    return 0;
}
