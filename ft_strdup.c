/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:29:42 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/16 15:35:56 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*n_str;

	n_str = malloc(ft_strlen(str) + 1);
	if (!n_str)
		return (NULL);
	ft_strlcpy(n_str, str, ft_strlen(str) + 1);
	return (n_str);
}
