/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:25:33 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/15 18:25:24 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n_bytes)
{
	size_t			i;
	unsigned char	*_str1;
	unsigned char	*_str2;

	_str1 = (unsigned char *)str1;
	_str2 = (unsigned char *)str2;
	i = 0;
	while (n_bytes--)
	{
		if (_str1[i] != _str2[i] || _str1[i] == 0 || _str2[i] == 0)
			return (_str1[i] - _str2[i]);
		i++;
	}
	return (0);
}
