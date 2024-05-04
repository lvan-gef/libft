/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 22:20:28 by lvan-gef      #+#    #+#                 */
/*   Updated: 2022/10/31 22:23:01 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	int				str_len;
	char			*str;

	if (!s)
		return (NULL);
	index = 0;
	str_len = ft_strlen(s);
	str = malloc((str_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[index] != '\0')
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
