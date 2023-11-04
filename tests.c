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

int test_noargs(void)
{
    printf("\nno args = (\"hello\")\n");
    printf("hello");
    printf(" || ");
    fflush(stdout);
    ft_printf("hello");
    printf("\n");
    return (0);
}

int test_chararg(void)
{
    printf("\nchar arg = (\"hello mr %%c\", 'A')\n");
    printf("hello mr %c", 'A');
    printf(" || ");
    fflush(stdout);
    ft_printf("hello mr %c", 'A');
    printf("\n");
    return (0);
}

int main(void)
{
    printf("\nprintf || ft_printf\n");
    test_noargs();
    test_chararg();
    printf("\n");
    return (0);
}