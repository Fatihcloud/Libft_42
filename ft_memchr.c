/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:11:14 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 12:02:43 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	if (c == '\0')
		return ((void *)s + i);
	return (NULL);
}

// int main ()
// {
// 	char *str;
// 	str = "babana vuruyum";
// 	int c = ' ';
// 	printf("%s", ft_memchr(str, c, ft_strlen(str)));
// }