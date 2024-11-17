/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:34:56 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/17 15:08:22 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*stamp;
	t_list	*next_node;

	stamp = *lst;
	if (!lst || !del)
		return ;
	while (stamp)
	{
		next_node = stamp->next;
		del(stamp->content);
		free (stamp);
		stamp = next_node;
	}
	*lst = NULL;
}
