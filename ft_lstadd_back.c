/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:41:23 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/12 15:06:57 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_el;

	if (lst == NULL || new == NULL)
		return ;
	last_el = ft_lstlast(*lst);
	if (!last_el)
	{
		*lst = new;
		return ;
	}
	last_el->next = new;
}
