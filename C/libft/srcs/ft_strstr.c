/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:00:43 by jbertran          #+#    #+#             */
/*   Updated: 2014/12/13 17:23:45 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		len;

	i = -1;
	len = ft_strlen(s2);
	if (!len)
		return ((char *)s1);
	while (s1[++i])
	{
		j = 0;
		while (s2[j] == s1[i + j])
		{
			if (j == len - 1)
				return ((char *)s1 + i);
			j++;
		}
	}
	return (NULL);
}
