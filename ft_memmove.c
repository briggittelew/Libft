/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:56:48 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/15 18:23:50 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n_bytes)
{
	size_t			i;
	unsigned char	*_dest;
	unsigned char	*_src;

	_src = (unsigned char *)src;
	_dest = (unsigned char *)dest;
	if (src == dest)
		return (dest);
	if (src < dest)
	{
		while (n_bytes--)
			*(_dest + n_bytes) = *(_src + n_bytes);
		return (dest);
	}
	i = 0;
	while (n_bytes--)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}
