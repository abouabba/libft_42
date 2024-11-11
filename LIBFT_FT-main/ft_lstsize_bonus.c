/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:20:07 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/10 11:43:29 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
// int main()
// {
// 	t_list	*head = ft_lstnew("anA");
// 	t_list	*second = ft_lstnew("RADI");
// 	t_list	*third = ft_lstnew("ldar");
// 	//t_list *tmep;
// 	t_list **lst = malloc(sizeof(t_list));
// 	ft_lstadd_front(lst, head);
// 	ft_lstadd_front(lst, second);
// 	ft_lstadd_front(lst, third);
// 	printf("%d\n", ft_lstsize(lst[0]));

// 	return 0;
// }