/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 17:26:59 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 03:27:31 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
* @brief Copy n bytes over to a new memory area
* memory areas may overlap
*
* @param dst
* @param src
* @param len
*
* @return
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_;
	const char	*src_;

	dst_ = (char *)dst;
	src_ = (const char *)src;
	if (!dst_ || !src_)
		return (NULL);
	if (dst_ < src_)
	{
		while (len--)
			*dst_++ = *src_++;
	}
	else
	{
		src_ += len - 1;
		dst_ += len - 1;
		while (len--)
			*dst_-- = *src_--;
	}
	return (dst);
}
