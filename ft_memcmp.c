/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:37:26 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/15 18:22:35 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n_bytes)
{
	size_t			i;
	unsigned char	*_str1;
	unsigned char	*_str2;

	_str1 = (unsigned char *)str1;
	_str2 = (unsigned char *)str2;
	i = 0;
	while (i < n_bytes)
	{
		if (*_str1 != *_str2)
			return (*_str1 - *_str2);
		i++;
		_str1++;
		_str2++;
	}
	return (0);
}
