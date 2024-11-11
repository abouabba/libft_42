/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:41:16 by abouabba          #+#    #+#             */
/*   Updated: 2024/10/30 18:16:57 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	if (ch >= 'a' && ch <= 'z')
		return (1);
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	return (0);
}
