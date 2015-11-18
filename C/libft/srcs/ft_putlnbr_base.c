/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 19:44:44 by jbertran          #+#    #+#             */
/*   Updated: 2015/01/06 10:24:05 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_putlnbr_base(unsigned long n, unsigned int base)
{
	if (n > base - 1)
	{
		ft_putlnbr_base(n / base, base);
		ft_putlnbr_base(n % base, base);
	}
	else
		ft_putdigit_base(n, base);
}
