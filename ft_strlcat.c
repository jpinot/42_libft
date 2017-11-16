/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 03:09:44 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/11 22:03:41 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *str, size_t size)
{
	size_t i;
	size_t a;
	size_t d_len;
	size_t s_len;

	i = ft_strlen(dst);
	a = 0;
	d_len = i;
	s_len = ft_strlen(str);
	if (size < i + 1)
		return (s_len + size);
	else
	{
		while (i < size - 1)
			dst[i++] = str[a++];
		dst[i] = 0;
	}
	return (d_len + s_len);
}
