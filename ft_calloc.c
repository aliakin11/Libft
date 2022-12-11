/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakin <alakin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:55:41 by alakin            #+#    #+#             */
/*   Updated: 2022/10/21 11:42:44 by alakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;

	if (size > count * size)
		return (NULL);
	b = malloc(count * size);
	if (!b)
		return (NULL);
	ft_bzero(b, count * size);
	return (b);
}
