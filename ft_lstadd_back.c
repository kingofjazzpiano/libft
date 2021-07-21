#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*last_node;

	if (lst)
	{
		if (*lst)
		{
			last_node = ft_lstlast(*lst);
			last_node->next = new;
		}
		else
			*lst = new;
	}
}
