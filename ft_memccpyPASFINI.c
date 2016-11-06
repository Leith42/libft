/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:39:29 by aazri             #+#    #+#             */
/*   Updated: 2016/11/06 18:07:48 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t     i;
    char       *des;
    const char *sr;

    i = 0;
    des = dest;
    sr = src;
    while ((i < n) && (sr[i] != c))
    {
        des[i] = sr[i];
        i++;
    }
    return (dest);
}

int main ()
{
  char myname[] = "Pierre de Fermat";
  char dest[80];
  ft_memccpy (dest, myname, 'l', sizeof(myname));
  printf ("%s", dest);

  return 0;
}
