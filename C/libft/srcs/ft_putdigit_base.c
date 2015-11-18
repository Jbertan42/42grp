/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 19:47:13 by jbertran          #+#    #+#             */
/*   Updated: 2015/01/07 10:34:34 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putdigit_base(unsigned long n, unsigned int base)
{
	if (n > base || base > 62 || base < 2)
		return ;
	if (n < 10)
		ft_putchar(n + '0');
	else if (n < 36)
		ft_putchar(n - 10 + 'a');
	else
		ft_putchar(n - 36 + 'A');
}
