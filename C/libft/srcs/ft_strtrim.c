/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:05:17 by jbertran          #+#    #+#             */
/*   Updated: 2014/12/13 17:24:25 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_isempty(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*str;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_isempty(s[start]) && s[start])
		start++;
	while (ft_isempty(s[end]) && end > start)
		end--;
	str = ft_strsub(s, start, end - start + 1);
	return (str);
}
