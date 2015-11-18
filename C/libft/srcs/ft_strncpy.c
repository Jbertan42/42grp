/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:27:38 by jbertran          #+#    #+#             */
/*   Updated: 2014/12/29 14:01:01 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (src)
	{
		i = -1;
		while (++i < n && src[i])
			dst[i] = src[i];
		i--;
		while (++i < n)
			dst[i] = 0;
	}
	return (dst);
}
