/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_check_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:14:10 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/08 10:21:58 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_add_check_error(int value, int temp)
{
	if (temp == -1 || value == -1)
		return (-1);
	return (value + temp);
}
