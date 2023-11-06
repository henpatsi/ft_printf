/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:36:01 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/06 16:12:28 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(unsigned int n)
{
	unsigned int	size;

	size = 1;
	while (n / 16 != 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}

static unsigned int	sixteen_to_power(int pow)
{
	unsigned int	num;

	num = 1;
	while (pow > 0)
	{
		num *= 16;
		pow--;
	}
	return (num);
}

static void	add_numbers(unsigned int n, char *str, int size, int use_capitals)
{
	int		i;
	char	h;
	int		dif;

	i = 0;
	if (use_capitals)
		dif = ('A' - '9' - 1);
	else
		dif = ('a' - '9' - 1);
	while (i < size)
	{
		h = (n / sixteen_to_power(size - 1 - i)) + '0';
		if (h > '9')
			h += dif;
		str[i] = h;
		n %= sixteen_to_power(size - 1 - i);
		i++;
	}
	str[i] = 0;
}

char	*ft_itoh(unsigned int n, int use_capitals)
{
	char	*str;
	int		size;

	size = get_size(n);
	str = malloc(size + 1);
	if (str == 0)
		return (0);
	add_numbers(n, str, size, use_capitals);
	return (str);
}