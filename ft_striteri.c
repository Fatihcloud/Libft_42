/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:54:21 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/28 19:47:31 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}

// void a(unsigned int i, char *anne)
// {
// 	printf("%d. harf : %c\n",i,*anne);
// }

// int main ()
// {
// 	char *str = "baba";
// 	ft_striteri(str, a);
// }