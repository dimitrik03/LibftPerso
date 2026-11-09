/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:37:12 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/09 15:06:44 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	taille;
	unsigned int	x;
	char			*dest;

	i = 0;
	taille = ft_strlen(s);
	if (start >= taille)
		return (ft_strdup(""));
	if (taille - start < len)
		x = taille - start;
	else
		x = len;
	dest = malloc(x * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (s[start] && i < len)
	{
		dest[i] = s[start];
		start ++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
