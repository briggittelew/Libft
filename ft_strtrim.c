/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:14:59 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/19 15:14:07 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{	
	char		*s2;
	size_t		i;
	size_t		nc;
	size_t		n;
	
	n = ft_strlen(s1) + 1;
	s2 = malloc (sizeof(char) * n);
	if (!s2)
		return (NULL);
	i = 0;
	
	while (i < ft_strlen(s1))
	{
		nc = 0;
		while (s1[i + nc] == set[nc])
			nc++;
		i += nc;
		//printf("%lu", i);	
		printf("%c", s1[16]);
		i++;
	}
	
	//ft_memcpy(s2, ft_strnstr(s1, set, ft_strlen(s1)), ft_strlen(s1) + 1);
	//printf("%s", s2);	
	return (s2);
}

int main(void)
{
    char *s1 = "cruel hola mundo cruel";
 	char *set = "cruel";

    //printf("%s\n", memchr(str, c, 7));
	ft_strtrim(s1, set);
    //printf("%s", ft_strtrim(s1, set));
}
