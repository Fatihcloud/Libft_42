/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:00:09 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/28 19:19:27 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;

	dsize = 0;
	while (dest[dsize] != '\0' && dsize < size)
		dsize++;
	i = dsize;
	while (src[dsize - i] && dsize + 1 < size)
	{
		dest[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < size)
		dest[dsize] = '\0';
	return (i + ft_strlen(src));
}
// int main()
// {
// 	char *str;
// 	const char *str1;
// 	str = ft_strdup("\nfatih naber kanki ");
// 	str1 = ft_strdup("iyidir kanki");
// 	printf("%zu", ft_strlcat(str, str1, 32));
// 	printf("%s", str);
// }
