/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 22:44:35 by aazri             #+#    #+#             */
/*   Updated: 2016/11/05 23:19:31 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int letter)
{
    int i;
    char *ret;

    i = 0;
    ret = NULL;
    while(str[i])
    {
        if(str[i] == letter)
            ret = ((char *)&str[i]);
        i++;
    }
    return (ret);
}
