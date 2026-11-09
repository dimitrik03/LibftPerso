/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:44:50 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/09 17:25:44 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int target)
{
	int		i;
	char	c;

	i = 0;
	c = (char) target;
	while (string[i])
	{
		if (string[i] == c)
		{
			return ((char *) &string[i]);
		}
		i++;
	}
	if (string[i] == c)
		return ((char *) &string[i]);
	return (NULL);
}
