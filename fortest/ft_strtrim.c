/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:57:53 by fnancy            #+#    #+#             */
/*   Updated: 2019/04/12 17:57:53 by fnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	counter;
	size_t	len;
	size_t	beg;
	char	*res;
	int		i;

	i = -1;
	counter = 0;
	len = ft_strlen(s) - 1;
	while ((++i != 2147483647) && ((s[i] == '\n' || s[i] == '\t'
			|| s[i] == ' ') && (s[i])))
		counter++;
	beg = i - 1;
	while ((s[len] == '\n' || s[len] == '\t' || s[len] == ' ') && (s[i]))
	{
		counter++;
		len--;
	}
	i = -1;
	res = ft_strnew(ft_strlen(s) - counter);
	while (++beg <= len && ++i != 2147483647)
		res[i] = s[beg];
	res[i + 1] = '\0';
	return (res);
}
