/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit_base_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 19:58:34 by jbertran          #+#    #+#             */
/*   Updated: 2015/01/06 09:23:35 by jbertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putdigit_base_fd(unsigned long n, unsigned int base, int fd)
{
	if (n > base || base > 62)
		return ;
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else if (n < 36)
		ft_putchar_fd(n - 10 + 'a', fd);
	else
		ft_putchar_fd(n - 36 + 'A', fd);
}
