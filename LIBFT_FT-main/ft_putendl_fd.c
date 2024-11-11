/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:12:03 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/07 22:53:59 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
// #include <fcntl.h>
// int main(){
// 	//char a[] = "abcde";
// 	int fd;
// 	 fd = open("fffffffffff.txt", O_WRONLY | O_APPEND | O_CREAT, 777);
// 	ft_putendl_fd("asdfghj", fd);
// }