/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/02 15:44:50 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 02:47:28 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
* @brief It creates a new linked list
* by iterating over each node in the linked list,
* applying the function to the content of the node,
* and creating a new node with the result.
*
* @param lst First node of the linked list (t_list*)
* @param f   Fucntion to call on node      (void* (*)(void*))
* @param del Function to del a node        (void (*)(void*))
*
* @return t_list* | NULL
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew((f)(lst->content));
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
