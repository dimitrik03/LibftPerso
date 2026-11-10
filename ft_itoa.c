/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:12:21 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/10 17:07:05 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);


}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	long	nbr;
	char	*tab;

	i = 0;
	j = 0;
	nbr = n;
	if (is_negative(nbr) == 1)
		nbr = nbr * - 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	if (is_negative == 1)
	{
		tab = malloc((i + 1) * sizeof(char) + 1);
		if (!tab)
			return (0);
		tab[j] = "-";
		j++;
	}
	tab = malloc(i * sizeof(char) + 1);
	if (!tab)
		return (0);
	while (j < i)
	{
		tab[j] = (n % 10) + '0';
		n = n / 10;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

int	main()
{
	int n = 123;
	ft_itoa(n);
}
