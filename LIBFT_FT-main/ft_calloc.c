/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:15:47 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/03 10:08:24 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)malloc(size * count);
	if (!s)
		return (NULL);
	while (i < (size * count))
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
// int main()
// {
// 	int *c;
// 	int i = 0;
// 	c = ft_calloc(1,sizeof(int));
// 	while(i > 5)
// 	{
// 		printf("%d ",c[i]);
// 		i++;
// 	}
// }