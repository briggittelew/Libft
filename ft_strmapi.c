/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:31:15 by karlewis          #+#    #+#             */
/*   Updated: 2023/01/14 14:52:19 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*n_str;
	unsigned int	i;

	i = 0;
	if (!s || (!s && !f))
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup(s));
	n_str = ft_strdup(s);
	if (!n_str)
		return (NULL);
	while (n_str[i])
	{
		n_str[i] = (*f)(i, n_str[i]);
		i++;
	}
	return (n_str);
}
