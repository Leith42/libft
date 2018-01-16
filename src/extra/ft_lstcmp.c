/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:30:29 by aazri             #+#    #+#             */
/*   Updated: 2017/09/25 11:30:30 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lexic_cmp(t_list *a, t_list *b)
{
	return (ft_strcmp(a->content, b->content));
}

int	ft_rlexic_cmp(t_list *a, t_list *b)
{
	return (-(ft_strcmp(a->content, b->content)));
}
