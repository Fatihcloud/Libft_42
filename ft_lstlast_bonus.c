/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:44:21 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/26 19:10:47 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list *list;
	
// 	list = ft_lstnew("I'am");
// 	ft_lstadd_back(&list, ft_lstnew("fatih"));
// 	ft_lstadd_back(&list, ft_lstnew("bulut"));
// 	list = ft_lstlast(list);
// 	printf("%s", list->content);
// }
