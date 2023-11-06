/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_putaddr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:33:46 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/06 16:27:20 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i_putaddr_fd(void *ptr, int fd)
{
	int		written1;
	int		written2;
	char	*hexstr;

	written1 = ft_i_putstr_fd("0x", 1);
	if (written1 == -1)
		return (-1);
	hexstr = ft_ltoh((unsigned long) ptr, 0);
	if (hexstr == 0)
		return (0);
	written2 = ft_i_putstr_fd(hexstr, fd);
	free(hexstr);
	if (written2 == -1)
		return (-1);
	return (written1 + written2);
}
