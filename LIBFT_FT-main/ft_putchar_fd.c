/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:39:31 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/07 18:11:05 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <fcntl.h>

// int main()
// {
// 	int fd;
// 	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
// 	ft_putchar_fd('-', fd);
// }
