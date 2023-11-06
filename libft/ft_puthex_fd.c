/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:08:32 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/06 10:58:52 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(unsigned int n, int use_capitals, int fd)
{
	ft_putstr_fd(ft_itoh(n, use_capitals), fd);
}
