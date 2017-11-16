/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 21:17:15 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/10 21:36:50 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *str, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (char *)str;
	while (n > 0 && *s != c)
	{
		*d++ = *(unsigned char*)s++;
		n--;
		if (*(unsigned char*)s == (unsigned char)c)
		{
			*d++ = *(unsigned char*)s++;
			return ((void*)d);
		}
	}
	return (NULL);
}
