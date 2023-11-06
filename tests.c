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
#include <limits.h>
#include "ft_printf.h"

int test_no_conv(void)
{
	printf("\n\n--- NO_CONVERSION ---\n");

    printf("\nargs = (\"hello\")\n");
    printf("hello");
    printf(" || ");
    fflush(stdout);
    ft_printf("hello");
    printf("\n");

	printf("\nargs = (\"hello\\nnewline\")\n");
    printf("hello\nnewline");
    printf("\n || \n");
    fflush(stdout);
    ft_printf("hello\nnewline");
    printf("\n");

	printf("\nargs = (\"hello\\ttab\")\n");
    printf("hello\ttab");
    printf(" || ");
    fflush(stdout);
    ft_printf("hello\ttab");
    printf("\n");

    return (0);
}

int test_c_conv(void)
{
	printf("\n\n--- c_CONVERSION ---\n");

    printf("\nargs = (\"Mr %%c\", 'F')\n");
    printf("Mr %c", 'F');
    printf(" || ");
    fflush(stdout);
    ft_printf("Mr %c", 'F');
    printf("\n");

	printf("\nargs = (\"300: %%c\", 300)\n");
    printf("300: %c", 300);
    printf(" || ");
    fflush(stdout);
    ft_printf("300: %c", 300);
    printf("\n");

	printf("\nargs = (\"3000: %%c\", 3000)\n");
    printf("3000: %c", 3000);
    printf(" || ");
    fflush(stdout);
    ft_printf("3000: %c", 3000);
    printf("\n");
	
    return (0);
}

int test_p_conv(void)
{
	printf("\n\n--- p_CONVERSION ---\n");

    printf("\nargs = (\"address: %%p\", \"address 1\")\n");
    printf("address: %p", "address 1");
    printf(" || ");
    fflush(stdout);
    ft_printf("address: %p", "address 1");
    printf("\n");

	printf("\nargs = (\"address: %%p\", \"address 2\")\n");
    printf("address: %p", "address 2");
    printf(" || ");
    fflush(stdout);
    ft_printf("address: %p", "address 2");
    printf("\n");

    return (0);
}

int test_s_conv(void)
{
	printf("\n\n--- s_CONVERSION ---\n");

    printf("\nargs = (\"hello %%s\", \"mom\")\n");
    printf("hello %s", "mom");
    printf(" || ");
    fflush(stdout);
    ft_printf("hello %s", "mom");
    printf("\n");

	printf("\nargs = (\"%%s %%s\", \"hello\", \"mom\")\n");
    printf("%s %s", "hello", "mom");
    printf(" || ");
    fflush(stdout);
    ft_printf("%s %s", "hello", "mom");
    printf("\n");

	printf("\nargs = (\"%%s %%s$\", \"hello\", \"\")\n");
    printf("%s %s$", "hello", "");
    printf(" || ");
    fflush(stdout);
    ft_printf("%s %s$", "hello", "");
    printf("\n");

	printf("\nargs = (\"%%s %%s$\", \"\", \"\")\n");
    printf("%s %s$", "", "");
    printf(" || ");
    fflush(stdout);
    ft_printf("%s %s$", "", "");
    printf("\n");
	
    return (0);
}

int test_d_conv(void)
{
	printf("\n\n--- d_CONVERSION ---\n");

	printf("\nargs = (\"n. %%d\", 0)\n");
    printf("n. %d", 0);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %d", 0);
    printf("\n");

    printf("\nargs = (\"n. %%d\", 1)\n");
    printf("n. %d", 1);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %d", 1);
    printf("\n");

	printf("\nargs = (\"n. %%d\", -1)\n");
    printf("n. %d", -1);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %d", -1);
    printf("\n");

	printf("\nargs = (\"n. %%d\", INT_MAX)\n");
    printf("n. %d", INT_MAX);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %d", INT_MAX);
    printf("\n");

	printf("\nargs = (\"n. %%d\", INT_MIN)\n");
    printf("n. %d", INT_MIN);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %d", INT_MIN);
    printf("\n");

	printf("\nargs = (\"n. %%d\", 0x64)\n");
    printf("n. %d", 0x64);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %d", 0x64);
    printf("\n");

    return (0);
}

int test_i_conv(void)
{
	printf("\n\n--- i_CONVERSION ---\n");

    printf("\nargs = (\"n. %%i\", 0)\n");
    printf("n. %i", 0);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %i", 0);
    printf("\n");

    printf("\nargs = (\"n. %%i\", 1)\n");
    printf("n. %i", 1);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %d", 1);
    printf("\n");

	printf("\nargs = (\"n. %%i\", -1)\n");
    printf("n. %i", -1);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %i", -1);
    printf("\n");

	printf("\nargs = (\"n. %%i\", INT_MAX)\n");
    printf("n. %i", INT_MAX);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %i", INT_MAX);
    printf("\n");

	printf("\nargs = (\"n. %%i\", INT_MIN)\n");
    printf("n. %i", INT_MIN);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %i", INT_MIN);
    printf("\n");

	printf("\nargs = (\"n. %%i\", 0x64)\n");
    printf("n. %i", 0x64);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %i", 0x64);
    printf("\n");

    return (0);
}

int test_u_conv(void)
{
	printf("\n\n--- u_CONVERSION ---\n");

	printf("\nargs = (\"n. %%u\", 0)\n");
    printf("n. %u", 0);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %u", 0);
    printf("\n");

	printf("\nargs = (\"n. %%u\", 42)\n");
    printf("n. %u", 42);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %u", 42);
    printf("\n");

	printf("\nargs = (\"n. %%u\", 4294967295)\n");
    printf("n. %u", (unsigned int) 4294967295);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %u", (unsigned int) 4294967295);
    printf("\n");

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
	printf("\n\n--- x_CONVERSION ---\n");

	printf("\nargs = (\"n. %%x\", 0)\n");
    printf("n. %x", 0);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %x", 0);
    printf("\n");

    printf("\nargs = (\"n. %%x\", 42)\n");
    printf("n. %x", 42);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %x", 42);
    printf("\n");

	printf("\nargs = (\"n. %%x\", -1)\n");
    printf("n. %x", -1);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %x", -1);
    printf("\n");

	printf("\nargs = (\"n. %%x\", 0x64)\n");
    printf("n. %x", 0x64);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %x", 0x64);
    printf("\n");

    return (0);
}

int test_X_conv(void)
{
	printf("\n\n--- X_CONVERSION ---\n");

	printf("\nargs = (\"n. %%X\", 0)\n");
    printf("n. %X", 0);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %X", 0);
    printf("\n");

    printf("\nargs = (\"n. %%X\", 42)\n");
    printf("n. %X", 42);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %X", 42);
    printf("\n");

	printf("\nargs = (\"n. %%X\", -1)\n");
    printf("n. %X", -1);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %X", -1);
    printf("\n");

	printf("\nargs = (\"n. %%X\", 0x64)\n");
    printf("n. %X", 0x64);
    printf(" || ");
    fflush(stdout);
    ft_printf("n. %X", 0x64);
    printf("\n");

    return (0);
}

int test_percent_conv(void)
{
	printf("\n\n--- %%_CONVERSION ---\n");

    printf("\nargs = (\"100 %%%%\")\n");
    printf("100 %%");
    printf(" || ");
    fflush(stdout);
    ft_printf("100 %%");
    printf("\n");

	printf("\nargs = (\"%%%%%%%%%%%%%%%%%%%%%%%%\")\n");
    printf("%%%%%%%%%%%%");
    printf(" || ");
    fflush(stdout);
    ft_printf("%%%%%%%%%%%%");
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