/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 03:03:30 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/08 04:26:04 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char digit;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	digit = (n % 10) + 48;
	write(fd, &digit, 1);
}
#include <fcntl.h>
int main() 
{
	int fd;

	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
    ft_putnbr_fd(12345, fd); // Expected output: 12345
    write(fd, "\n", 1); // Print newline
    ft_putnbr_fd(-6789, fd);  // Expected output: -6789
    write(fd, "\n", 1); // Print newline
    ft_putnbr_fd(-2147483648, fd); // Expected output: -2147483648
    write(fd, "\n", 1); // Print newline
    return 0;
}