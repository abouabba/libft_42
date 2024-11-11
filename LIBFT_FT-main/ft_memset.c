/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:24:59 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/09 22:00:35 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = b;
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = (unsigned char)c;  // implicite cast 
		// p[i	] = c;		 //  explicite cast 
		i++;
	}
	return (b);
}

// #include <string.h>
// int main()
// {
//     int st;
//     int s;
//     ft_memset(&st, 0, 4);
//     ft_memset(&st, -88888822222222222, 1);
//     printf("ft_memset: %d\n", st);
//     memset(&s, 0, 4);
//     memset(&s, -88888822222222222, 1);
//     printf("memset: %d\n", s);

//     return 0;
// }