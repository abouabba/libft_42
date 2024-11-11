/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:22:14 by abouabba          #+#    #+#             */
/*   Updated: 2024/10/30 18:56:47 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s)
		return (d);
	if (d > s)
	{
		while (n-- > 0)
			d[n - 1] = s[n - 1];
	}
	else
	{
		while (i++ < n)
			d[i] = s[i];
	}
	return (d);
}

// int main() 
// {
//     char str[] = "Hello, World!";
//     // Move the substring "Hello" to the end of the string
//     ft_memmove(str, str + 7, 7);  // Move " World!" to the start
//     printf("%s\n", str);  // Output will be "Hello, Hello!"
//     return 0;
// }
