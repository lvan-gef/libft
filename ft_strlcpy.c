/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 18:13:19 by lvan-gef      #+#    #+#                 */
/*   Updated: 2022/12/01 18:16:58 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		src_len;
	size_t	index;

	src_len = ft_strlen(src);
	index = 0;
	if (!dstsize)
		return (src_len);
	while (*src != '\0')
	{
		if (index < dstsize - 1)
		{
			*dst++ = *src;
			index++;
		}
		src++;
	}
	*dst = '\0';
	return (src_len);
}
