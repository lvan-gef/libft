/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:38:50 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 03:25:20 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
* @brief Copy n bytes over to a new memory area
* memory areas does not overlap
*
* @param dst Memory area where copy to   (void*)
* @param src Memory area where copy from (void*)
* @param len Size to be copy             (size_t)
*
* @return void* | NULL
*/
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*dst_;
	const char	*src_;

	if (!src || !dst)
		return (NULL);
	dst_ = dst;
	src_ = src;
	while (len--)
		*dst_++ = *src_++;
	return (dst);
}
