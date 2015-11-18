/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 12:43:04 by jbertran          #+#    #+#             */
/*   Updated: 2014/12/29 13:02:45 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t size, size_t new_size)
{
	void	*new_ptr;

	new_ptr = ft_memalloc(new_size);
	ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}
