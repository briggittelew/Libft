/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:30:42 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/09 17:33:03 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	unsigned char *_str;

	_str = (unsigned char *)str;
	i = 0;
	while (n--)
	{
		//while (*(_str + n) != c)
			//str++;
		if (*(_str + n) == c)
		return ((_str + n));
	}	
	return (0);
}

int main(void)
{
	char str[] = "bonjour";
	char c = 'o';

	printf("%s\n", memchr(str, c, 7));
	printf("%s", ft_memchr(str, c, 7));
}
