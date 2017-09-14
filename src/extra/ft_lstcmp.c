#include "libft.h"

int	ft_lexic_cmp(t_list *a, t_list *b)
{
	return (ft_strcmp(a->content, b->content));
}

int	ft_rlexic_cmp(t_list *a, t_list *b)
{
	return (-(ft_strcmp(a->content, b->content)));
}
