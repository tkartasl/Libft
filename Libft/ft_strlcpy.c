/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 08:13:59 by tkartasl          #+#    #+#             */
/*   Updated: 2023/11/01 11:24:09 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t	dstsize)
{
	size_t	len;

	len = 0;
	while (src[len] != 0)
	{
		if (len < dstsize - 1 && dstsize != 0)
			dst[len] = src[len];
		len++;
	}
	dst[len] = 0;
	return (len);
}
