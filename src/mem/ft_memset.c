/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:27:27 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 03:27:31 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
* @brief Set memory area with a value
*
* @param dest Memory area              (void*)
* @param val  Value to set memory area (int)
* @param len  Size of the memory area  (int)
*
* @return void*
*/
void	*ft_memset(void *dest, int val, int len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (len--)
	{
		*ptr++ = val;
	}
	return (dest);
}
