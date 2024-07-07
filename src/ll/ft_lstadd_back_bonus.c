/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/01 22:43:12 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 01:45:03 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

// Write a docstring in the style of javadocs wich only useing the ``@brief`` ```@param``` ```@return```, i want also type annotation for the fields, function declaretion: ```void    ft_lstadd_back(t_list **lst, t_list *new)```
// Write a docstring in the style of javadocs, wich only useing the @brief @param @return, i want also type annotation for the fields, function declaretion: ```void    ft_lstadd_back(t_list **lst, t_list *new)```
// Write a doxygen for C, wich only useing the @brief @param @return, i want also type annotation f or the fields, function declaretion: ```void    ft_lstadd_back(t_list **lst, t_list *new)```
// Write a doxygen for C, wich only useing the @brief @param @return, i want also type annotation f or the fields, and only the doc noting else and also no function declaration, function declareti on: ```void    ft_lstadd_back(t_list **lst, t_list *new)```

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
