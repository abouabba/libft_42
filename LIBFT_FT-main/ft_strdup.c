/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:11:34 by abouabba          #+#    #+#             */
/*   Updated: 2024/10/30 18:48:16 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*s2;

	j = 0;
	i = ft_strlen(s1);
	s2 = malloc((i + 1) * (sizeof(char)));
	if (!s2)
		return (NULL);
	while (s1[j])
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}

// int main()
// {
// 	char source[] = "kjguyfu";
// 	char* target = ft_strdup(source);
// 	printf("%s", target);
// 	return 0;
// }