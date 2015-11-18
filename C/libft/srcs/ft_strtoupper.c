/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 14:15:29 by jbertran          #+#    #+#             */
/*   Updated: 2015/03/31 16:58:00 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtoupper(char *str)
{
	int		i;

	i = -1;
	if (!str)
		return (NULL);
	while (str[++i])
		str[i] = ft_toupper(str[i]);
	return (str);
}
