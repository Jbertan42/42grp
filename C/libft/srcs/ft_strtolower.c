/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 16:55:21 by jbertran          #+#    #+#             */
/*   Updated: 2015/03/31 16:57:48 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtolower(char *str)
{
	int		i;

	i = -1;
	if (!str)
		return (NULL);
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}
