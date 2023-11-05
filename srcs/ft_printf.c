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

static char  is_conversion(const char **strptr)
{
    if (**strptr == '%' && *(*strptr + 1) != 0)
    {
        *strptr = *strptr + 1;
        return (1);
    }
    return (0);
}

static void handle_conversion(const char *str, int arg)
{
    if (*str == 'c')
        ft_putchar_fd(arg, 1);
    else if (*str == 'i' || *str == 'd')
        ft_putnbr_fd(arg, 1);
    else if (*str == 'u')
        ft_putunbr_fd(arg, 1);
    else
        ft_putstr_fd("(not yet implemented)", 1);
}

int ft_printf(const char *str, ...)
{
    va_list arg_ptr;

    va_start(arg_ptr, str);
    while (*str != 0)
    {
        if (is_conversion(&str))
        {
            handle_conversion(str, va_arg(arg_ptr, int));
        }
        else
            ft_putchar_fd(*str, 1);
        str++;
    }
    va_end(arg_ptr);
    return (0);
}
