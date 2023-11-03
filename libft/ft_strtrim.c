/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:41:37 by hpatsi            #+#    #+#             */
/*   Updated: 2023/10/31 10:51:56 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char	const *set)
{
	while (*set != 0)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (s1 == 0)
		return (0);
	start = 0;
	while (in_set(s1[start], set) && s1[start] != 0)
		start++;
	end = ft_strlen(s1) - 1;
	while (in_set(s1[end], set) && end > start)
		end--;
	trimmed = ft_substr(s1, start, end - start + 1);
	return (trimmed);
}
