/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_putunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:18:02 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/08 10:22:31 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i_putunbr(unsigned int n)
{
	int	written;

	written = 0;
	if (n >= 10)
		written = ft_add_check_error(written, ft_i_putunbr(n / 10));
	n = (n % 10) + '0';
	written = ft_add_check_error(written, ft_i_putchar(n));
	return (written);
}
