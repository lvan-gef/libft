/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 16:39:39 by lvan-gef      #+#    #+#                 */
/*   Updated: 2022/12/01 18:47:55 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		index;
	char	cc;

	index = 0;
	cc = c;
	str = (char *)s;
	if (cc == '\0')
		return (&str[ft_strlen(str)]);
	while (s[index])
	{
		if (str[index] == cc)
			return (&str[index]);
		index++;
	}
	return (NULL);
}
