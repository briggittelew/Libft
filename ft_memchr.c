/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:30:42 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/12 15:26:49 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*_str;
	unsigned char	_char;

	_str = (unsigned char *)str;
	_char = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*_str == _char)
			return (_str);
		_str++;
		i++;
	}
	return (NULL);
}
