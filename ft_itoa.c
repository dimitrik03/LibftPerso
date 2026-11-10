/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:12:21 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/10 18:50:01 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	count(int n)
{
	int (i) = 0;
	long (nbr) = n;
	if (is_negative(n) == 1)
	{
		nbr = nbr * -1;
	}
	if (nbr == 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*tab;

	int (i) = count(n);
	long (tmp) = n;
	if (is_negative(tmp) == 1)
		tmp = tmp * -1;
	tab = malloc((i + is_negative(n)) * sizeof(char) + 1);
	if (!tab)
		return (0);
	tab[i + is_negative(n)] = '\0';
	while (i != 0)
	{
		if (is_negative(n) == 1)
		{
			tab[0] = '-';
			tab[i--] = (tmp % 10) + '0';
			tmp = tmp / 10;
		}
		else
		{
			tab[--i] = (tmp % 10) + '0';
			tmp = tmp / 10;
		}
	}
	return (tab);
}
/*
#include <stdio.h>

int	main()
{
	int n = -15;
	printf("%s\n", ft_itoa(n));
}
*/
