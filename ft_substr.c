/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:10:18 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/16 16:38:02 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char		*sub_str;
	const char	*c;

	if (start > ft_strlen(str) || str == NULL)
		return (ft_strdup(""));
	if (ft_strlen(str) < len)
		len = ft_strlen(str) + 1;
	else
		len++;
	sub_str = malloc(sizeof(char) * len);
	if (!sub_str)
		return (0);
	c = (char *)str + start;
	ft_strlcpy(sub_str, c, len);
	return (sub_str);
}
