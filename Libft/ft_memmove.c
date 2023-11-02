/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:13:48 by tkartasl          #+#    #+#             */
/*   Updated: 2023/11/02 15:21:12 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		while (i < len - 1)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	if (dst < src)
	{
		while (len > i)
		{
			((char *)dst)[len] = ((char *)src)[len];
			len--;
		}
	}
	return (dst);
}
