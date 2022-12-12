/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:12:45 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/12 16:49:56 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	strnstr(const char *str, const char *substr)
{
	size_t			i;
	size_t			j;
	size_t	concur;
	size_t	length;
	//unsigned char	_str;
	//unsigned char	_substr;

	//_str = (unsigned char)str;
	//_substr = (unsigned char)substr;
	
	length = ft_strlen(substr);
	if (*substr == '\0')
		return (*substr);
	i = 0;
	while (*str != '\0' && concur <= )
	{
		while (*substr == *str && *substr != '\0')
		{
			str++;
			substr++;
		}
		
	}
	
}