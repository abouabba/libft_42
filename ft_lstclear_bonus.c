/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:34:56 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/20 10:43:39 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*stamp;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	stamp = *lst;
	while (stamp)
	{
		next_node = stamp->next;
		del(stamp->content);
		free (stamp);
		stamp = next_node;
	}
	*lst = NULL;
}
