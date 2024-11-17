/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:10:57 by abouabba          #+#    #+#             */
/*   Updated: 2024/10/30 18:25:00 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	sh;

	i = 0;
	str = (unsigned char *)s;
	sh = (unsigned char )c;
	while (i < n)
	{
		if (str[i] == sh)
		{
			return ((char *) str + i);
		}
		i++;
	}
	return (NULL);
}
