/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:43:24 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/26 15:37:58 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// void del(void *str)
// {
// 	free(str);
// }

// int main ()
// {
// 	t_list *list;
// 	t_list *next;
// 	list = ft_lstnew(ft_strdup("hello"));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("world")));
// 	next = list->next;
// 	ft_lstdelone(list,del);
// 	printf("%s",(char *)list->content);
// }
