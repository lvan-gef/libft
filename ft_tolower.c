/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:36:17 by lvan-gef      #+#    #+#                 */
/*   Updated: 2022/10/06 14:36:46 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (!ft_isalpha(c))
		return (c);
	if (c < 65 || c > 90)
		return (c);
	return (c + 32);
}
