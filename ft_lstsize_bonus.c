/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:44:42 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 10:50:28 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
// int main ()
// {
// 	t_list *list;
// 	int uzunluk;

// 	list = ft_lstnew("selam");
// 	ft_lstadd_back(&list, ft_lstnew("ben"));
// 	ft_lstadd_back(&list, ft_lstnew("fatih"));
// 	ft_lstadd_back(&list, ft_lstnew("bulut"));
// 	ft_lstadd_back(&list, ft_lstnew("sen"));
// 	ft_lstadd_back(&list, ft_lstnew("kimsin?"));
// 	uzunluk = ft_lstsize(list);
// 	printf("%d",uzunluk);
// }
