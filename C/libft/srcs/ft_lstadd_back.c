/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 20:06:42 by jbertran          #+#    #+#             */
/*   Updated: 2014/12/13 16:47:41 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **begin, t_list *new)
{
	t_list	*elem;

	if (!begin || !(*begin))
		return ;
	elem = *begin;
	while (elem->next)
		elem = elem->next;
	elem->next = new;
}
