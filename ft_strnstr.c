/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:17:56 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/28 18:52:37 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hayint;
	size_t	needint;

	hayint = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[hayint] != 0 && hayint < len)
	{
		needint = 0;
		while (haystack[hayint + needint] == needle[needint]
			&& needle[needint] != 0 && needint + hayint < len)
			needint++;
		if (needint == ft_strlen(needle))
			return ((char *)&haystack[hayint]);
		hayint++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *str;
// 	const char *str1;
// 	str = "anne lütfen bana yardım et";
// 	str1 = "bana";
// 	printf("%s", ft_strnstr(str, str1, 29));
// }