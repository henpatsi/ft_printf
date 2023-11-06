/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:27 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/06 16:08:43 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i_putstr_fd(char *s, int fd)
{
	int	written;

	written = 0;
	while (*s != 0)
	{
		if (ft_i_putchar_fd(*s, fd) == -1)
			return (-1);
		written++;
		s++;
	}
	return (written);
}
