/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:22:18 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/20 00:46:46 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i] && i <= len)
	{
		while (haystack[i] == needle[j] && i <= len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i - j);
		}
		i++;
	}
	return (NULL);
}
