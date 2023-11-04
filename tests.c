/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:48:58 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/04 10:48:58 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int test_no_conv(void)
{
    printf("\nargs = (\"hello\")\n");
    printf("hello");
    printf(" || ");
    fflush(stdout);
    ft_printf("hello");
    printf("\n");
    return (0);
}

int test_c_conv(void)
{
    printf("\nargs = (\"Mr %%c\", 'F')\n");
    printf("Mr %c", 'F');
    printf(" || ");
    fflush(stdout);
    ft_printf("Mr %c", 'F');
    printf("\n");
    return (0);
}

int test_p_conv(void)
{
    printf("\nargs = (\"address: %%p\", \"address of this\")\n");
    printf("address: %p", "address of this");
    printf(" || ");
    fflush(stdout);
    ft_printf("address: %p", "address of this");
    printf("\n");
    return (0);
}

int test_s_conv(void)
{
    printf("\nargs = (\"hello %%s\", \"mom\")\n");
    printf("hello %s", "mom");
    printf(" || ");
    fflush(stdout);
    ft_printf("hello %s", "mom");
    printf("\n");
    return (0);
}

int test_d_conv(void)
{
    printf("\nargs = (\"n. %%d\", 1)\n");
    printf("n. %d", 1);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %d", 1);
    printf("\n");
    return (0);
}

int test_i_conv(void)
{
    printf("\nargs = (\"n. %%i\", 2)\n");
    printf("n. %i", 2);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %i", 2);
    printf("\n");
    return (0);
}

int test_u_conv(void)
{
    printf("\nargs = (\"n. %%u\", -1)\n");
    printf("n. %u", -1);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %u", -1);
    printf("\n");
    return (0);
}

int test_x_conv(void)
{
    printf("\nargs = (\"n. %%x\", 42)\n");
    printf("n. %x", 42);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %x", 42);
    printf("\n");
    return (0);
}

int test_X_conv(void)
{
    printf("\nargs = (\"n. %%X\", 42)\n");
    printf("n. %X", 42);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %X", 42);
    printf("\n");
    return (0);
}

int test_percent_conv(void)
{
    printf("\nargs = (\"100 %%%%\")\n");
    printf("100 %%");
    printf(" || ");
    fflush(stdout);
    ft_printf("100 %%");
    printf("\n");
    return (0);
}

int main(void)
{
    printf("\nprintf || ft_printf\n");
    test_no_conv();
    test_c_conv();
    test_s_conv();
    test_p_conv();
    test_d_conv();
    test_i_conv();
    test_u_conv();
    test_x_conv();
    test_X_conv();
    test_percent_conv();
    printf("\n");
    return (0);
}