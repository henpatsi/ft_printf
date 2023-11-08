/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:48:37 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/08 10:21:45 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i_putnbr(int n)
{
	int	written;

	written = 0;
	if (n == -2147483648)
	{
		return (ft_i_putstr("-2147483648"));
	}
	if (n < 0)
	{
		written = ft_add_check_error(written, ft_i_putchar('-'));
		n *= -1;
	}
	if (n >= 10)
		written = ft_add_check_error(written, ft_i_putnbr(n / 10));
	n = (n % 10) + '0';
	written = ft_add_check_error(written, ft_i_putchar(n));
	return (written);
}
