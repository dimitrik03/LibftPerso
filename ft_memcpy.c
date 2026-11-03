/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:21:48 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/03 18:21:37 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void*dest, const void*src, size_t count)
{
	size_t				i;
	unsigned char		*temp_dest;
	unsigned char const	*temp_src;

	i = 0;
	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char const *) src;
	while (i < count)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}
