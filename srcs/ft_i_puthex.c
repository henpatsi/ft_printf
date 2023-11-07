/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_puthex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:25:27 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/07 10:23:36 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_i_puthex(unsigned int n, int use_capitals)
{
	int		written;
	char	*hexstr;

	hexstr = ft_itoh(n, use_capitals);
	if (hexstr == 0)
		return (0);
	written = ft_i_putstr(hexstr);
	free(hexstr);
	return (written);
}
