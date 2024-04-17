/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 08:13:59 by tkartasl          #+#    #+#             */
/*   Updated: 2024/04/17 09:09:03 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t	dstsize)
{
	size_t	len;

	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	len = 0;
	while (src[len] != 0 && len < dstsize - 1)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = 0;
	if (dstsize <= ft_strlen(src))
		return (ft_strlen(src));
	else
		return (len);
}
