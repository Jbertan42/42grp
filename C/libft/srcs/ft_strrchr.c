/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:47:28 by jbertran          #+#    #+#             */
/*   Updated: 2014/12/13 17:22:30 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!c)
		return ((char *)&s[i]);
	while (--i >= 0)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (NULL);
}
