/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:58:05 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/06 15:44:02 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, unsigned char c, size_t n)
{
	unsigned int	i;
	char			*_str;

	_str = str;
	i = 0;
	while ((size_t)i < n)
		_str[i++] = c;
	return (_str);
}
