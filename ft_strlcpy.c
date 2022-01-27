/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:53:23 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 19:39:16 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

// int	main()
// {
// 	char src[50] = "merhaba ben fatih bey ";
// 	char dst[100] = "gotunu sikim jbhfdıhvdsbfıhfsvjhsdv jfsdhbjhsfdbsdf";
	 
// 	printf("%zu %s", ft_strlcpy(dst, src, 15), dst);
// }