/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:44:33 by hpatsi            #+#    #+#             */
/*   Updated: 2023/10/30 08:31:03 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	cc;
	size_t			i;

	str = (char *) b;
	cc = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		str[i] = cc;
		i++;
	}
	return (b);
}
