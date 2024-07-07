/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:42:38 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 03:14:52 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
* @brief Compare two memory area's for n size to see if they are the same
*
* @param s1 Memory area 1   (void*)
* @param s2 Memory area 2   (void*)
* @param n  Size to compare (size_t)
*
* @return int 0 | 1>
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				index;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (str1[index] != str2[index])
			return (str1[index] - str2[index]);
		index++;
	}
	return (0);
}
