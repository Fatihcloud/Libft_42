/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:56:15 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 16:00:38 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	boyut;

	if (!s1 || !s2)
		return (NULL);
	boyut = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = malloc(sizeof(char) * boyut);
	i = -1;
	j = -1;
	if (!str)
	{
		return (NULL);
	}	
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}

// int main ()
// {
// 	char str[] = "anne ";
// 	char str1[] = "baba";
// 	printf("%s", ft_strjoin(str ,str1));
// }