/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:22:37 by alakin            #+#    #+#             */
/*   Updated: 2022/10/21 03:06:48 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;

	if (!*needle)
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	while (*haystack && n-- >= ft_strlen(needle))
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			i++;
			if (!needle[i])
				return ((char *)(haystack));
		}
		haystack++;
	}
	return (NULL);
}
