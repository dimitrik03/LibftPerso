/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:47:41 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/09 11:11:03 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	signe;
	int	c;

	i = 0;
	res = 0;
	signe = 1;
	c = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (c == 1)
			return (0);
		if (str[i] == '-')
			signe = signe * -1;
		c = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i++] - 48;
	}
	return (res * signe);
}
