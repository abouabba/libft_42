/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:18:12 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/07 23:11:05 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	if (dstsize <= dst_len)
		return (src_len + dst_len);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

#include <stdio.h>
#include <string.h>
int main() {
    char dst[10] = "123456789";
    const char *src = "ABCD";
    size_t dstsize = sizeof(dst);
    size_t result = ft_strlcat(NULL, src, dstsize); 
    printf("Result: %s\n", dst);         
    printf("Length: %zu\n", result);
    return 0;
}