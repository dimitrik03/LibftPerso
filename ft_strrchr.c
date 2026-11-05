/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:11:57 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/05 13:19:25 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*resultat;
	char	target;

	i = 0;
	resultat = NULL;
	target = (char) ch;
	while (str[i])
	{
		if (str[i] == target)
		{
			resultat = (char *) &str[i];
		}
		i++;
	}
	if (str[i] == target)
	{
		resultat = (char *) &str[i];
	}
	return (resultat);
}
