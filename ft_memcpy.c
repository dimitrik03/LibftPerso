/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:21:48 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/02 18:31:41 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void*dest, const void*src, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		(unsigned char *) dest[i] = (unsigned char *) src[i];
		i++;
	}
	return (*dest);
}
