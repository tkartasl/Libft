/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:05:47 by tkartasl          #+#    #+#             */
/*   Updated: 2023/11/01 11:24:18 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;
	size_t	t;
	size_t	j;

	j = ft_strlen(dst);
	i = 0;
	t = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i] != 0)
		i++;
	while (i < dstsize - 1 && src[t] != 0)
	{
		dst[i] = src[t];
		i++;
		t++;
	}
	dst[i] = 0;
	if (dstsize < j)
		return (ft_strlen(src) + dstsize);
	else
		return (j + ft_strlen(src));
}
