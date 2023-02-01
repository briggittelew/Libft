/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:05:53 by karlewis          #+#    #+#             */
/*   Updated: 2023/01/06 17:42:12 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*sarr;
	char	**arr;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s || !c)
		return (NULL);
	while (s[i])
	{
		j = 0;
		sarr = malloc(sizeof(char) * (ft_strlen(s) + 1));
		arr = &sarr;
		while (s[i] != c && i < ft_strlen(s))
			sarr[j++] = s[i++];
		sarr[j++] = '\0';
		//printf("%s\n", sarr);
		i++;
		*arr = sarr;
		arr++;
	}
	return (&*arr);
}
