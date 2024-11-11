/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:29:08 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/10 22:19:39 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}

// void del(void *content)
// {
// 	free(content);
// }
// int main()
// {
//     t_list *node = malloc(sizeof(t_list));
// 	t_list *head  = malloc(sizeof(t_list));

// 	head->content = ft_strdup("hhhhhh");
// 	head->next = node;
//     node->content = "ana";
//     node->next = NULL;

//     ft_lstdelone(head, del);
// 	printf("%s\n", node->content);

//     return (0);
// }