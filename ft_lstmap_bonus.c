/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:44:29 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 10:51:58 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;

	result = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}

// void del(t_list *list)
// {
// 	free(list);
// }

// void sing(char *str)
// {
// 	printf("%s", str);
// }

// int main()
// {
// 	t_list *list;
// 	t_list *newlist;

// 	list = ft_lstnew(ft_strdup("merhaba\n"));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("ben\n")));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("fatih\n")));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("nasılsın?\n")));
// 	newlist = ft_lstmap(list,(void *)sing,(void *)del);
// 	ft_lstiter(list,(void *)sing);
// }