/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:48:37 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/06 16:09:09 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i_putnbr_fd(int n, int fd)
{
	int	written;

	written = 0;
	if (n == -2147483648)
	{
		return (ft_i_putstr_fd("-2147483648", fd));
	}
	if (n < 0)
	{
		if (ft_i_putchar_fd('-', fd) == -1)
			return (-1);
		n *= -1;
	}
	if (n >= 10)
		written = ft_i_putnbr_fd(n / 10, fd);
	n = (n % 10) + '0';
	if (written == -1 || ft_i_putchar_fd(n, fd) == -1)
		return (-1);
	return (written + 1);
}
