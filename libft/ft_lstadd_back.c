#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if ((last = ft_lstlast(*lst)) != NULL)
		last->next = new;
}
