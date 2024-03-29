/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:26:15 by jbertran          #+#    #+#             */
/*   Updated: 2014/12/13 17:03:57 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	if (s)
	{
		i = -1;
		while (s[++i])
			if (s[i] == (char)c)
				return ((char *)&s[i]);
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
