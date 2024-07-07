/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-gef <lvan-gef@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 16:22:30 by lvan-gef      #+#    #+#                 */
/*   Updated: 2024/07/07 03:34:35 by lvan-gef      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
* @brief Write a char
*
* @param c  Char to write   (char)
* @param fd File descriptor (int)
*
* @return void
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
