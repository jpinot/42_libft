/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 22:04:37 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/16 01:08:05 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	a;
	size_t	e;
	char	*c;

	i = 0;
	e = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) == 0)
		return ("");
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		if (s[i] == '\0')
			return ("");
	}
	a = ft_strlen(s) - 1;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a--;
	c = ft_strsub(s, i, a - i + 1);
	return (c);
}
