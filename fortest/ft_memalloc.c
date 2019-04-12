/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:20:41 by fnancy            #+#    #+#             */
/*   Updated: 2019/04/09 19:20:41 by fnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*res;
	int		*help;

	if (!(res = malloc(size)))
		return (NULL);
	else
	{
		help = res;
		while (size != 0)
		{
			help[size] = 0;
			size--;
		}
		return (res);
	}
}
