/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:46:05 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/29 12:53:15 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (p);
	ft_bzero(p, (count * size));
	return (p);
}

// int main ()
// {
// 	size_t a;
// 	size_t b;
// 	a = 2;
// 	b = 8;
// 	printf("%s", ft_calloc(a,b));
// }