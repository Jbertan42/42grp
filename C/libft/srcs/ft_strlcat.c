/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:45:28 by jbertran          #+#    #+#             */
/*   Updated: 2014/12/13 17:13:06 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = -1;
	if (size <= dstlen)
		return (srclen + size);
	else
	{
		while (++i + dstlen < size - 1)
			dst[dstlen + i] = src[i];
		dst[dstlen + i] = 0;
		return (srclen + dstlen);
	}
}
