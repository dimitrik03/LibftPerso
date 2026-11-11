/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 09:09:04 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/10 17:08:08 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lib_mem(char **tab)
{
	int (i) = 0;
	while (tab[i] != NULL)
		i++;
	while (i > 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c)
		{
			if (s[i] != '\0')
				i++;
			else
				break ;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int (i) = 0;
	int (start) = 0;
	int (end) = 0;
	int (count) = count_words(s, c);
	char **(tab) = malloc((count + 1) * sizeof(char *));
	if (!tab)
		return (0);
	while (count != 0)
	{
		while (s[start] == c && s[start] != '\0')
			s++;
		while (s[end] && s[end] != c)
			end++;
		tab[i] = ft_substr(s, start, (end - start));
		if (!tab[i])
		{
			lib_mem(tab);
			return (0);
		}
		count--;
		i++;
		start = end;
	}
	tab[i] = '\0';
	return (tab);
}

/*
#include <stdio.h>
int main()
{
	char **dest;
	int (s) = 0;
	char i = 'x';
	dest = ft_split("HelloxWorld", i);
	while (dest[s])
	{
		printf("%s\n", dest[s]);
		s++;
	}
}
*/
