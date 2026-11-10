/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:12:21 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/10 17:55:15 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);


}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	long	tmp;
	char	*tab;

	i = 0;
	nbr = n;
	tmp = n;
	if (is_negative(n) == 1)
	{
		nbr = nbr * - 1;
		tmp = tmp * - 1;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	if (is_negative(n) == 1)
	{
		tab = malloc((i + 1) * sizeof(char) + 1);
		if (!tab)
			return (0);
		tab[0] = '-';
		tab[i + 1] = '\0';
	}
	else
	{
		tab = malloc(i * sizeof(char) + 1);
		if (!tab)
			return (0);
		tab[i + 1] = '\0';
	}
	while (i != 0)
	{
		if (is_negative(n) == 1)
		{
			tab[i] = (tmp % 10) + '0';
			tmp = tmp / 10;
			i--;
		}
		else
		{
			i--;
			tab[i] = (tmp % 10) + '0';
			tmp = tmp / 10;
		}
	}
	return (tab);
}

#include <stdio.h>

int	main()
{
	int n = -2147483647;
	printf("%s\n", ft_itoa(n));
}

