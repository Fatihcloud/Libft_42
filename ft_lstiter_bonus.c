/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:44:15 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/26 15:23:22 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

// void ft_putstr(char *str)
// {
// 	while (*str)
// 	write (1, str++, 1);
// }

// int main ()
// {
// 	t_list *list;
	
// 	list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew("hello "));
// 	ft_lstadd_back(&list, ft_lstnew("world"));
// 	ft_lstiter(list,(void(*)(void *))ft_putstr);
// }
