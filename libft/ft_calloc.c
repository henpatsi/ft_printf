/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:09:52 by hpatsi            #+#    #+#             */
/*   Updated: 2023/11/02 12:56:40 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	total = count * size;
	if (total / count != size)
		return (0);
	ptr = malloc(total);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, total);
	return (ptr);
}
