/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:37:34 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/08 06:31:16 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// #include <ctype.h>
// int main() {
// 	printf ("%d\n", ft_isalpha('7'));
// 	printf ("%d\n", ft_isalpha('a'));
// 	printf ("%d\n", ft_isalpha('A'));
// 	printf ("%d\n", ft_isalpha('Z'));
// 	printf ("%d\n", ft_isalpha('z'));
// 	printf ("%d\n", ft_isalpha(0));
// 	printf ("%d\n", ft_isalpha(97));
// }