/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:32:47 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/02 19:15:52 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t count)
{
	size_t	i;

	i = count;
	if (src < dest)
	{
		while (count != 0)
		{
			(unsigned char *) dest[count] = (unsigned char *) src[count];
			count--;
		}
		return (dest);
	}
	else
	{
		return ((memcpy(dest, src, count)));
	}
}
