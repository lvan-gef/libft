/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/01 22:43:12 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 02:32:14 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
* @brief Add a node at the end of the linked list
*
* @param lst  Head of the linked list       (t_list**)
* @param node Node to at to the linked list (t_list*)
*
* @return void
*/
void	ft_lstadd_back(t_list **lst, t_list *node)
{
	t_list	*cur;

	if (!node)
		return ;
	cur = NULL;
	if (*lst == NULL)
		*lst = node;
	else
	{
		cur = *lst;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = node;
	}
}
