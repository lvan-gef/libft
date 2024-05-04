/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/01 22:43:12 by lvan-gef      #+#    #+#                 */
/*   Updated: 2022/12/02 15:43:32 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	if (!new)
		return ;
	cur = NULL;
	if (*lst == NULL)
		*lst = new;
	else
	{
		cur = *lst;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new;
	}
}
