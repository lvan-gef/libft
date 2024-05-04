/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:56:25 by lvan-gef      #+#    #+#                 */
/*   Updated: 2022/12/01 18:49:20 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			index;
	unsigned char	cc;

	index = 0;
	cc = (unsigned char)c;
	str = (unsigned char *)s;
	while (index < n)
	{
		if (str[index] == cc)
			return (&str[index]);
		index++;
	}
	return (NULL);
}
