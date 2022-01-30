/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:44:07 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/30 20:14:53 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*array;

	while ((*lst))
	{
		array = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = array;
	}
}

// void	del(char *str)
// {
// 	free(str);
// }

// void	a(char *str)
// {
// 	printf("%s", str);
// }

// int	main()
// {
// 	t_list	*list;

// 	list = ft_lstnew(ft_strdup("fatih\n"));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("bulut\n")));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("yaş\n")));
// 	ft_lstadd_back(&list, ft_lstnew(ft_strdup("20\n")));
// 	ft_lstiter(list, (void *)a);
// 	printf("a\n");
// 	ft_lstclear(&list, (void *)del);
// 	ft_lstiter(list->content, (void *)a);
// }
