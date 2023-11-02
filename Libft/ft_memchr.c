/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:58:14 by tkartasl          #+#    #+#             */
/*   Updated: 2023/11/01 11:25:35 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t	n)
{
	unsigned char	*cp;
	size_t			i;
	unsigned char	uc;

	uc = (unsigned char)c;
	cp = (unsigned char *)s;
	i = 0;
	while (cp[i] != 0 && i < n)
	{
		if (cp[i] == uc)
		{
			cp = &cp[i];
			return (cp);
		}
		i++;
	}
	if (cp[i] == uc)
	{
		cp = &cp[i];
		return (cp);
	}
	return (NULL);
}
