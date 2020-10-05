/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 21:55:39 by jinhokim          #+#    #+#             */
/*   Updated: 2020/10/05 20:18:02 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*t;

	if (lst == 0 || f == 0)
		return (NULL);
	if (!(result = ft_lstnew((*f)(lst->content))))
		return (NULL);
	t = result;
	lst = lst->next;
	while (lst)
	{
		if (!(t->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		t = t->next;
		lst = lst->next;
	}
	return (result);
}
