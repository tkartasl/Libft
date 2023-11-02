/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:22:25 by tkartasl          #+#    #+#             */
/*   Updated: 2023/11/01 09:57:23 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*s;
	int		n;

	n = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (s1[n] != 0)
	{
		s[n] = s1[n];
		n++;
	}
	while (*s2 != 0)
	{
		s[n] = *s2;
		n++;
		s2++;
	}
	s[n] = 0;
	return (s);
}
