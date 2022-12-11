/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:28:45 by alakin            #+#    #+#             */
/*   Updated: 2022/10/21 17:22:37 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	digit(long num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		i++;
		num = -num;
	}
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*mystr;
	int		a;
	long	nb;

	nb = n;
	a = digit(nb);
	mystr = (char *)malloc(a + 1);
	if (!mystr)
		return (NULL);
	if (n < 0)
	{
		nb *= -1;
		mystr[0] = '-';
	}
	mystr[a] = '\0';
	a--;
	while ((n < 0) <= a)
	{
		mystr[a] = (nb % 10) + 48;
		nb /= 10;
		a--;
	}
	return (mystr);
}
