/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:30:42 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/15 18:20:45 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n_bytes)
{
	size_t			i;
	unsigned char	*_str;
	unsigned char	_char;

	_str = (unsigned char *)str;
	_char = (unsigned char)c;
	i = 0;
	while (i < n_bytes)
	{
		if (*_str == _char)
			return (_str);
		_str++;
		i++;
	}
	return (NULL);
}
