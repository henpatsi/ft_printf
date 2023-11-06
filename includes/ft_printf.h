/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:47:28 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/04 10:47:28 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
//# include "libft.h"

int		ft_printf(const char *str, ...);
int		ft_i_putchar_fd(char c, int fd);
int		ft_i_putstr_fd(char *s, int fd);
int		ft_i_putnbr_fd(int n, int fd);
int		ft_i_putunbr_fd(unsigned int n, int fd);
int		ft_i_puthex_fd(unsigned int n, int use_capitals, int fd);
int		ft_i_putaddr_fd(void *ptr, int fd);
char	*ft_itoh(unsigned int n, int use_captials);
char	*ft_ltoh(unsigned long n, int use_capitals);

#endif