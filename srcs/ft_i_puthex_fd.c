/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_puthex_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:25:27 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/06 16:27:12 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i_puthex_fd(unsigned int n, int use_capitals, int fd)
{
	int		written;
	char	*hexstr;

	hexstr = ft_itoh(n, use_capitals);
	if (hexstr == 0)
		return (0);
	written = ft_i_putstr_fd(hexstr, fd);
	free(hexstr);
	return (written);
}
