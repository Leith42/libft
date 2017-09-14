#include "libft.h"

static void		ft_frontbacksplit(t_list *source, t_list **frontref, \
	t_list **backref)
{
	t_list *fast;
	t_list *slow;

	if (source == NULL || source->next == NULL)
	{
		*frontref = source;
		*backref = NULL;
	}
	else
	{
		slow = source;
		fast = source->next;
		while (fast != NULL)
		{
			fast = fast->next;
			if (fast != NULL)
			{
				slow = slow->next;
				fast = fast->next;
			}
		}
		*frontref = source;
		*backref = slow->next;
		slow->next = NULL;
	}
}

static t_list	*ft_sortedmerge(t_list *a, t_list *b, \
	int (*cmp)(t_list *a, t_list *b))
{
	t_list *result;

	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);
	if (cmp(a, b) <= 0)
	{
		result = a;
		result->next = ft_sortedmerge(a->next, b, cmp);
	}
	else
	{
		result = b;
		result->next = ft_sortedmerge(a, b->next, cmp);
	}
	return (result);
}

void			ft_lstsort(t_list **headref, int (*cmp)(t_list *a, t_list *b))
{
	t_list *head;
	t_list *a;
	t_list *b;

	head = *headref;
	if ((head == NULL) || (head->next == NULL))
	{
		return ;
	}
	ft_frontbacksplit(head, &a, &b);
	ft_lstsort(&a, cmp);
	ft_lstsort(&b, cmp);
	*headref = ft_sortedmerge(a, b, cmp);
}
