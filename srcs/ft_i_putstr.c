/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:27 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/07 10:23:47 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i_putstr(char *s)
{
	int	written;

	written = 0;
	while (*s != 0)
	{
		written += ft_i_putchar(*s);
		s++;
	}
	return (written);
}
