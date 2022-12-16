/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:15:13 by karlewis          #+#    #+#             */
/*   Updated: 2022/12/16 13:01:20 by karlewis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_elem, size_t elem_size)
{
	void	*p;

	p = malloc(n_elem * elem_size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, n_elem * elem_size);
	return (p);
}
