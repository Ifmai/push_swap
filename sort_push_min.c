/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:50:15 by hozdemir          #+#    #+#             */
/*   Updated: 2022/12/17 17:40:50 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

t_list *sort_list_tree(t_list *a,t_list *b)
{
	if(check_sort_list(a))
		exit(0);
	while(!(a -> index < a -> next -> index && a -> index < a ->next -> next ->index) && ft_lstsize(a) != 2)
		a = ra(a, 1);
	if(a -> index < a -> next -> index && a -> index < a ->next -> next ->index)
		b = pb(&a,b);
	if(a -> index > a -> next -> index)
		sa(a,1);
	while(ft_lstsize(b))
		a = pa(&b,a);
	return (a);
}

t_list *sort_list_four(t_list *a, t_list *b, int size)
{
	int	rot;
	
	rot = serach_half_min(a,ft_lstsize(a));
	while (a -> index != search_min_index(a,size))
	{
		if(rot == 0)
			a = rra(a, 1);
		else
			a = ra(a, 1);
	}
	if(check_sort_list(a))
		exit(0);
	b = pb(&a,b);
	a = sort_list_tree(a, b);
	return (a);
}

t_list *sort_list_five(t_list *a, t_list *b, int size)
{
	int	rot;
	rot = serach_half_min(a,ft_lstsize(a));
	while (a -> index != search_min_index(a,ft_lstsize(a)))
	{
		if(rot == 0)
			a = rra(a, 1);
		else
			a = ra(a, 1);
	}
	if(check_sort_list(a))
		exit(0);
	b = pb(&a,b);
	a = sort_list_four(a, b, size);
	return (a);
}