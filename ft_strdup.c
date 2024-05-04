/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:53:28 by lvan-gef      #+#    #+#                 */
/*   Updated: 2022/12/01 18:09:51 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1) + 1;
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len);
	return (str);
}
