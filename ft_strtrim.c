/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:53:27 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/09 17:51:32 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while ((ft_strchr(set, s1[start]) != NULL) && s1[start] != '\0')
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	return (ft_substr(s1, start, (end + 1 - start)));
}
