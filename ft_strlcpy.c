/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:06:34 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/04 18:04:35 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size >= (len_src + 1))
	{
		while (i < size)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (len_src);
}
