/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:20:20 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/06 12:41:54 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putaddr_fd(void *ptr, int fd)
{
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(ft_ltoh((unsigned long) ptr, 0), fd);
}