/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:53:27 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/09 16:39:49 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		start;
	int		end;
	char	*dest;

	i = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i] == set[i])
	{
		i++;
	}
	start = i;
	i = 0;
	while (s1[len] == set[i])
	{
		len--;
		i++;
	}
	end = len;
	ft_substr(s1, start, (end - start));
	return (dest);
}
