/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:52:07 by karlewis          #+#    #+#             */
/*   Updated: 2023/01/14 14:00:54 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_get_len(long n)
{
	unsigned int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}		
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nn;
	char	*result;

	len = ft_get_len(n);
	nn = n;
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (nn == 0)
	{
		result[0] = '0';
		return (result);
	}		
	if (nn < 0)
		nn = nn * -1;
	while (len--)
	{
		result[len] = (nn % 10) + '0';
		nn /= 10;
	}
	if (result[0] == '0')
		result[0] = '-';
	return (result);
}
