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
    printf("noargs = \"hello\"\n");
    printf("hello");
    printf(" || ");
    fflush(stdout);
    ft_printf("hello", "str");
    printf("\n");
    return (0);
}

int main(void)
{
    printf("printf || ft_printf");
    test_noargs();
    return (0);
}