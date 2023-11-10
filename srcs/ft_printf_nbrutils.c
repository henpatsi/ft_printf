/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbrutils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:27:16 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/10 13:19:57 by hpatsi           ###   ########.fr       */
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

int	ft_i_puthex(unsigned int n, int use_capitals)
{
	int	written;
	int	dif;

	written = 0;
	if (n >= 16)
		written = ft_add_check_error(written,
				ft_i_puthex(n / 16, use_capitals));
	if (use_capitals)
		dif = ('A' - '9' - 1);
	else
		dif = ('a' - '9' - 1);
	n = (n % 16) + '0';
	if (n > '9')
		n += dif;
	written = ft_add_check_error(written, ft_i_putchar(n));
	return (written);
}

static int	i_putlonghex(unsigned long n)
{
	int	written;

	written = 0;
	if (n >= 16)
		written = ft_add_check_error(written, i_putlonghex(n / 16));
	n = (n % 16) + '0';
	if (n > '9')
		n += ('a' - '9' - 1);
	written = ft_add_check_error(written, ft_i_putchar(n));
	return (written);
}

int	ft_i_putaddr(void *ptr)
{
	int		written;

	written = ft_i_putstr("0x");
	written = ft_add_check_error(written, i_putlonghex((unsigned long) ptr));
	return (written);
}
