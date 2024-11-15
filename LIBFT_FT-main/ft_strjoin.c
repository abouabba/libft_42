/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:53:58 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/09 22:26:34 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s_everyone;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	s_everyone
		= (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!s_everyone)
		return (NULL);
	while (i < s1[i])
	{
		s_everyone[i] = s1[i];
		i++;
	}
	while (i < s2[j])
		s_everyone[i++] = s2[j++];
	s_everyone[i] = '\0';
	return (s_everyone);
}

// int main()
// {
//     char *str = malloc(2);
// 	memset(str,'a',922337203685);
//     char *s = ft_strjoin(str,str); 
//     printf("%s\n", s);
// 	// while(1)
// 	// {
// 	// 	;
// 	// }
//     free(s);
//     return 0;
// }
//9223372036854775807