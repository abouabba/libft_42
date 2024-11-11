/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:09:10 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/02 22:37:07 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// int main() 
// {
//     char source[] = "97Hello, World!";
//     char destination[70];

//     memcpy(destination, source, 0);
//     // ft_memcpy(destination, source, 0);

//     printf("Source: %s\n",destination);
//     printf("Destination: %s\n", destination);

//     return 0;
// }