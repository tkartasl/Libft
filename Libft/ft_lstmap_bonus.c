/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:02:26 by tkartasl          #+#    #+#             */
/*   Updated: 2023/11/09 18:12:55 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;
	t_list	*headnew;

	if (!lst || !f || !del)
		return (0);
	current = lst;
	new = ft_lstnew(f(current->content));
	if (new == 0)
		return (0);
	headnew = new;
	current = current->next;
	while (current != 0)
	{
		new->next = ft_lstnew(f(current->content));
		if (new->next == 0)
		{
			del(new->content);
			ft_lstclear(&headnew, del);
			return (0);
		}
		new = new->next;
		current = current->next;
	}
	return (headnew);
}