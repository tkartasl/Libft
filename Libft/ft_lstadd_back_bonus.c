/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:18:23 by tkartasl          #+#    #+#             */
/*   Updated: 2023/11/09 18:17:35 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if(!lst || !new)
		return ;
    if (*lst == 0)
    {
        *lst = new;
        return ;
    }
	current = *lst;
	new->next = NULL;
	while (current->next != 0)
		current = current->next;
	current->next = new;
}
