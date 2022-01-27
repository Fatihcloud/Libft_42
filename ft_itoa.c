/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:41:57 by fbulut            #+#    #+#             */
/*   Updated: 2022/01/27 13:50:03 by fbulut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	intlen(int c)
{
	int	i;

	i = 0;
	if (c <= 0)
	{
		i = 1;
	}
	while (c)
	{
		i++;
		c = c / 10;
		if (c == 0)
			break ;
	}
	return (i);
}

char	*sayiyapici(int n, int struzunluk, int rakam, char *str)
{
	while (struzunluk >= 0)
	{
		rakam = n % 10;
		str[struzunluk--] = rakam + 48;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		struzunlugumuz;
	char	*str;
	int		rakamimiz;
	int		sign;

	struzunlugumuz = intlen(n);
	rakamimiz = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * struzunlugumuz + 1);
	if (!str)
		return (0);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	str[struzunlugumuz--] = '\0';
	sayiyapici(n, struzunlugumuz, rakamimiz, str);
	if (sign == -1 && str[0] == '0')
		str[0] = '-';
	return (str);
}
// int main ()
// {
// 	printf("%s", ft_itoa(5));
// }
