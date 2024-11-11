/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:28:37 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/04 00:21:57 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		len_s;
	size_t	i;
	char	*s1;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	i = 0;
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	if (len > len_s - start)
		len = len_s - start;
	if (start >= len_s)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[i + start];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int main() 
// {
//     // char str[] = "Hello, World!";
//     char *s = ft_substr("", 0, 0);
//     printf("Substring: %s\n", s);
//     return 0;
//     // free(sub);
// }