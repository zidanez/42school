/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 19:28:37 by fnancy            #+#    #+#             */
/*   Updated: 2019/04/14 19:28:37 by fnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*help;

	if (!(res = ft_lstnew(f(lst)->content, f(lst)->content_size)))
		return (NULL);
	help = res;
	lst = lst->next;
	while (lst->next != NULL)
	{
		res->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
		lst = lst->next;
		res = res->next;
	}
	res->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
	return (help);
}
