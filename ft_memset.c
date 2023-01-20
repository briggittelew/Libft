/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:58:05 by karlewis          #+#    #+#             */
/*   Updated: 2023/01/20 16:12:47 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n_bytes)
{
	unsigned int	i;
	char			*_str;

	_str = str;
	i = 0;
	while ((size_t)i < n_bytes)
		_str[i++] = c;
	return (_str);
}
