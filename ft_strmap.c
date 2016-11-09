/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:19:25 by aazri             #+#    #+#             */
/*   Updated: 2016/11/09 15:47:02 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strmap(char const *s, char (*f)(char))
{
    char *str;
    size_t i;

    i = 0;
    if (s && f)
    {
        str = (char *)malloc(sizeof(str) * ft_strlen(s));
        while(i < ft_strlen(s))
        {
            str[i] = f(str[i]);
            i++;
        }
        return (str);
    }
    return (NULL);
}

char func(char s)
{
    s = 'z';
    return (s);
}

int main(int argc, char const *argv[])
{
    char *str = NULL;
    char (*kek)(char) = &func;
    puts(ft_strmap(str, kek));
    return 0;
}
