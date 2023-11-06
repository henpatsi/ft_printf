/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_putunbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:18:02 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/06 16:09:34 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i_putunbr_fd(unsigned int n, int fd)
{
	int	written;

	written = 0;
	if (n >= 10)
		written = ft_i_putunbr_fd(n / 10, fd);
	n = (n % 10) + '0';
	if (written == -1 || ft_i_putchar_fd(n, fd) == -1)
		return (-1);
	return (written + 1);
}
