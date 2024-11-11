/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:51:30 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/08 01:09:58 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_count(n);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[len] = '\0';
	i = len - 1;
	if (n < 0)
	{
		new[0] = '-';
		n = -n;
	}
	while (n >= 0)
	{
		new[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	new[i] = n + '0';
	return (new);
}

// int main()
// {
// 	long w = 00002147483648;
// 	printf("%d\n", ft_count(w));
// 	printf("%s",ft_itoa(w));

// }
