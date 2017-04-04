/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 13:46:46 by aazri             #+#    #+#             */
/*   Updated: 2017/04/04 13:46:52 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list **begin_list)
{
	t_list	*swap;
	t_list	*reverse;

	reverse = NULL;
	while (*begin_list != NULL)
	{
		swap = (*begin_list)->next;
		(*begin_list)->next = reverse;
		reverse = *begin_list;
		*begin_list = swap;
	}
	*begin_list = reverse;
}
