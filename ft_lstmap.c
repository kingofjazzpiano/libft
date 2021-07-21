#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_node;
	t_list	*new_node;

	if (f == NULL || lst == NULL)
		return (NULL);
	head_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			while (head_node)
			{
				new_node = head_node->next;
				(*del)(head_node->content);
				free(head_node);
				head_node = new_node;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&head_node, new_node);
		lst = lst->next;
	}
	return (head_node);
}
