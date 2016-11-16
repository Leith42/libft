/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:21:57 by aazri             #+#    #+#             */
/*   Updated: 2016/11/16 18:47:23 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static size_t  ft_countwords(char const *s, char c)
{
    size_t i;
    size_t words;

    i = 0;
    words = 0;
    while(s[i])
    {
        while(s[i] && s[i] == c)
            i++;
        while(s[i] && s[i] != c)
            i++;
        words++;
    }
    if(s[i - 1] == c && words >= 1)
        words--;
    return (words);
}

static size_t    ft_wordlen(char const *s, char c)
{
    size_t i;
    size_t len;

    i = 0;
    len = 0;
    while(s[i])
    {
        while(s[i] && s[i] == c)
            i++;
        while(s[i] && s[i] != c)
        {
            i++;
            len++;
        }
    }
    return (len);
}

char    **ft_strsplit(char const *s, char c)
{
    size_t i;
    size_t j;
    size_t k;
    char **tab;

    if (!s || !(tab = (char **)malloc(sizeof(*tab) * (ft_countwords(s, c) + 1))))
		return (NULL);
    i = 0;
    j = 0;

    if(ft_wordlen(&s[j], c) == 0)
    {
        tab[i] = NULL;
        return (tab);
    }
    while (i < ft_countwords(s, c))
    {
        k = 0;
        if (!(tab[i] = ft_strnew(ft_wordlen(&s[j], c) + 1)))
            tab[i] = NULL;
        while (s[j] == c)
            j++;
        while (s[j] != c && s[j])
            tab[i][k++] = s[j++];
        tab[i][k] = '\0';
        i++;
    }
    tab[i] = NULL;
    return (tab);
}
