/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:12:45 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/15 18:22:12 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n_bytes)
{
	size_t	i;
	size_t	nc;
	size_t	n_substr;
	char	*_str;

	i = 0;
	_str = (char *)str;
	n_substr = ft_strlen(substr);
	if (n_substr == 0 || str == substr)
		return (_str);
	while (_str[i] != '\0' && i < n_bytes)
	{
		nc = 0;
		while (_str[i + nc] != '\0' && substr[nc] != '\0'
			&& _str[i + nc] == substr[nc] && i + nc < n_bytes)
			nc++;
		if (nc == n_substr)
			return (_str + i);
		i++;
	}
	return (0);
}
