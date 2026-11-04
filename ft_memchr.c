/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:10:12 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/04 18:41:17 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t n)
{
	unsigned char	target;
	unsigned char	*p;
	size_t			i;

	target = (unsigned char) ch;
	p = (unsigned char *) ptr;
	i = 0;
	while (i < n)
	{
		if (p[i] == target)
			return ((void *) &p[i]);
		i++;
	}
	return (NULL);
}
