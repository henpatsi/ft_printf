/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_putaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:33:46 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/08 10:23:36 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_i_putaddr(void *ptr)
{
	int		written;
	char	*hexstr;

	written = ft_i_putstr("0x");
	hexstr = ft_ltoh((unsigned long) ptr, 0);
	if (hexstr == 0)
		return (0);
	written = ft_add_check_error(written, ft_i_putstr(hexstr));
	free(hexstr);
	return (written);
}
