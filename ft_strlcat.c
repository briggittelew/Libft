/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:11:15 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/15 18:24:48 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t n_bytes)
{
	size_t	i;
	size_t	s_src;
	size_t	s_dest;
	size_t	size;

	s_dest = ft_strlen(dest);
	s_src = ft_strlen((char *) src);
	i = 0;
	if (n_bytes > s_dest)
		size = s_dest + s_src;
	else
		size = s_src + n_bytes;
	while (src[i] && (s_dest + 1) < n_bytes)
	{
		dest[s_dest] = src[i];
		s_dest++;
		i++;
	}
	dest[s_dest] = '\0';
	return (size);
}
