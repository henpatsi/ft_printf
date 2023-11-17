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

int		ft_printf(const char *str, ...);
int		ft_i_putchar(char c);
int		ft_i_putstr(char *s);
int		ft_i_putnbr(int n);
int		ft_i_putunbr(unsigned int n);
int		ft_i_puthex(unsigned int n, int use_capitals);
int		ft_i_putaddr(void *ptr);
int		ft_add_check_error(int value, int temp);

#endif