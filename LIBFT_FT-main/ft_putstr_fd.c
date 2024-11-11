/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:57:12 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/07 00:16:30 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// #include <fcntl.h>
// int main()
// {
// 	int fd;

// 	fd = open("fffffffffffffffff.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
// 	ft_putstr_fd("gkjhg\nfdsauytre\nwjhgfdkjhgfkj\nhkjh,kjhkljkkjhfjbyn\nuftir6768bb87en \ni y8ofu 6rdy5s yse5v\n6 6u7i7iujuthbjm\n           mgjgmg\njjjkfukhkiykku\n", fd);
// }