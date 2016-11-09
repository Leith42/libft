/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 23:11:12 by aazri             #+#    #+#             */
/*   Updated: 2016/11/05 23:19:29 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(const char *str, int letter)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == letter)
            return ((char *)&str[i]);
        i++;
    }
    return (NULL);
}
