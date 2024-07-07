/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 15:33:07 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 03:01:46 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
* @brief Set memory area to zeros
*
* @param s Begin of memory area    (void*)
* @param c Size of the memory area (size_t)
*
* @return void
*/
void	ft_bzero(void *s, size_t c)
{
	if (c > 0)
		ft_memset(s, 0, c);
}
