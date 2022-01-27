/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:44:35 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 09:43:13 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*src;

	src = (t_list *) malloc(sizeof(t_list));
	if (!src)
		return (NULL);
	src -> content = content;
	src -> next = NULL;
	return (src);
}
// void a(char *str)
// {
// 	printf("%s", str);
// }

// int main()
// {
// 	t_list *list;
	
// 	list = ft_lstnew("anan ");
// 	ft_lstadd_back(&list,ft_lstnew(("kardeşim")));
// 	ft_lstiter(list,(void(*)(void *))a);
// }