/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:35:08 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 12:22:49 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str;
	char	*src1;
	size_t	i;

	i = 0;
	str = (char *)dst;
	src1 = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = src1[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	char str1[] = "merhaba";
// 	char str2[] = "baba";
// 	printf("%s",ft_memcpy(str1, str2, 3));
// }