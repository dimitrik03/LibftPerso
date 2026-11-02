/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:55:49 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/02 18:10:12 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void*dest, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		(unsigned char *)dest[i] = (unsigned char)ch;
	}
	return (*dest);
}
