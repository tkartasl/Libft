/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:35:38 by tkartasl          #+#    #+#             */
/*   Updated: 2023/11/01 09:53:34 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cptr;
	size_t	i;

	i = 0;
	cptr = malloc((len + 1) * sizeof(char));
	if (cptr == NULL)
		return (NULL);
	while (i < len && s[start] != 0)
	{
		cptr[i] = s[start];
		i++;
		start++;
	}
	cptr[i] = 0;
	return (cptr);
}
