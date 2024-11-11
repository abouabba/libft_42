/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:55:48 by abouabba          #+#    #+#             */
/*   Updated: 2024/10/31 15:14:05 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s;
	size_t	start;
	char	*new;

	len_s = ft_strlen(s1);
	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (len_s > start && ft_strchr(set, s1[len_s - 1]))
		len_s--;
	new = malloc ((len_s - start + 1) * sizeof(char));
	ft_cpy (new, s1 + start, len_s - start);
	new[len_s - start] = '\0';
	return (new);
}

// int main() 
// {
// 	char *s = "!=Hello, Worl=!d!=";
// 	char *set = "!=";
// 	char *trimmed = ft_strtrim(s, set);
// 	if (trimmed) 
// 	{
// 		printf("Trimmed string: %s\n", trimmed);
// 		free(trimmed);
// 	}
// 	return 0;
// }