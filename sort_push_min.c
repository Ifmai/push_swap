/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:50:15 by hozdemir          #+#    #+#             */
/*   Updated: 2023/01/08 08:51:37 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

t_list	*sort_list_tree(t_list *a, int size)
{
	if (a->index == size)
		a = ra(a, 1);
	else if (a->next->index == size)
		a = rra(a, 1);
	if (a->index > a->next->index)
		sa(a, 1);
	return (a);
}

t_list	*sort_list_four(t_list *a, t_list *b, int size)
{
	int	rot;

	while (ft_lstsize(a) > 3)
	{
		rot = serach_half_min(a, ft_lstsize(a));
		while (a -> index != search_min_index(a, \
			ft_lstsize(a)) && ft_lstsize(a) > 3)
		{
			if (rot == 0)
				a = rra(a, 1);
			else
				a = ra(a, 1);
		}
		b = pb(&a, b);
	}
	a = sort_list_tree(a, size);
	while (b != NULL)
		a = pa(&b, a);
	return (a);
}
