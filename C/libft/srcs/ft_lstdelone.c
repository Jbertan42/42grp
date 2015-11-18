/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:07:08 by jbertran          #+#    #+#             */
/*   Updated: 2014/12/13 16:48:32 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*elem;

	if (!alst || !(*alst))
		return ;
	elem = *alst;
	*alst = elem->next;
	del(elem->content, elem->content_size);
	free(elem);
	elem = NULL;
}
