/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:06:53 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/12 11:28:35 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*c;

	i = 0;
	c = lst;
	while (c != NULL)
	{
		c = c->next;
		i++;
	}
	return (i);
}
