/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:44:00 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 10:36:08 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
// void a(char *str)
// {
// 	printf("%s", str);
// }

// int main ()
// {
// 	t_list *list;

// 	list = ft_lstnew("fatih\n");
// 	ft_lstadd_back(&list,ft_lstnew("eren\n"));
// 	ft_lstiter(list, (void *)a);
// 	ft_lstadd_front(&list,ft_lstnew("eren\n"));
// 	ft_lstiter(list, (void *)a);
// }
