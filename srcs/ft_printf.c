/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:42:44 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/04 10:42:44 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	is_conversion(const char **strptr)
{
	if (**strptr == '%' && *(*strptr + 1) != 0)
	{
		*strptr = *strptr + 1;
		return (1);
	}
	return (0);
}

static int	handle_string_conversion(va_list *arg_ptr_ptr)
{
	char	*str;

	str = va_arg(*arg_ptr_ptr, char *);
	if (str == 0)
		return (ft_i_putstr("(null)"));
	else
		return (ft_i_putstr(str));
}

static int	handle_conversion(const char *str, va_list *arg_ptr_ptr)
{
	if (*str == 'c')
		return (ft_i_putchar(va_arg(*arg_ptr_ptr, int)));
	else if (*str == 's')
		return (handle_string_conversion(arg_ptr_ptr));
	else if (*str == 'p')
		return (ft_i_putaddr(va_arg(*arg_ptr_ptr, void *)));
	else if (*str == 'd' || *str == 'i')
		return (ft_i_putnbr(va_arg(*arg_ptr_ptr, int)));
	else if (*str == 'u')
		return (ft_i_putunbr(va_arg(*arg_ptr_ptr, unsigned int)));
	else if (*str == 'x')
		return (ft_i_puthex(va_arg(*arg_ptr_ptr, unsigned int), 0));
	else if (*str == 'X')
		return (ft_i_puthex(va_arg(*arg_ptr_ptr, unsigned int), 1));
	else if (*str == '%')
		return (ft_i_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		printed;
	va_list	arg_ptr;

	printed = 0;
	va_start(arg_ptr, str);
	while (*str != 0)
	{
		if (is_conversion(&str))
			printed += handle_conversion(str, &arg_ptr);
		else
			printed += ft_i_putchar(*str);
		str++;
	}
	va_end(arg_ptr);
	return (printed);
}
