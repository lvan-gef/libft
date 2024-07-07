/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:56:25 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 03:11:20 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
* @brief Find the fist instance of <c> in <s>
*
* @param s Begin of memory area (void*)
* @param c Char to find         (int)
* @param n Size of memory area  (size_t)
*
* @return void* | NULL
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			index;
	unsigned char	ch;

	index = 0;
	ch = (unsigned char)c;
	str = (unsigned char *)s;
	while (index < n)
	{
		if (str[index] == ch)
			return (&str[index]);
		index++;
	}
	return (NULL);
}
