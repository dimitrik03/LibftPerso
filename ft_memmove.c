/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:32:47 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/04 15:49:38 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*t_dest;
	unsigned char	*t_src;
	size_t			i;

	t_dest = (unsigned char *) dest;
	t_src = (unsigned char *) src;
	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			t_dest[n] = t_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			t_dest[i] = t_src[i];
			i++;
		}
	}
	return (dest);
}
/*
int main()
{
	char sResult[] = {01, 02, 05, 5};
	printf("%p\n", ft_memmove(sResult + 1, sResult, 2));
}
*/
