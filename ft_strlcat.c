/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 02:38:15 by alakin            #+#    #+#             */
/*   Updated: 2022/10/21 09:29:16 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[j] && j < dstsize)
		j++;
	while ((src[k]) && ((j + k + 1) < dstsize))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != dstsize)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}
