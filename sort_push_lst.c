/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:47:00 by hozdemir          #+#    #+#             */
/*   Updated: 2022/12/06 06:07:06 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

t_list *sort_20(t_list *a, t_list **b, int _20, int _100, int x)
{
	int	rot;
	int indexx;

	indexx = 1;
	while(indexx <= _20 && ft_lstsize(a) > 3)
	{
		rot = firsrt_or_sec_a(a,_20);
		while (a -> index > _20)
		{
			if(rot == 1)
			{
				if (*b && (*b)->index < search_max_index(*b) - x)
					a = rr(a, b);
				else
					a = ra(a,1);
			}
			else if (rot == 2)
			{
				if (*b && (*b)->index < search_max_index(*b) - x)
					a = rrr(a, b);
				else
					a = rra(a,1);
			}
			else
				break;
		}
		if(a -> index <= _20  && a -> index != _100)
			(*b) = pb(&a,(*b));
		indexx++;
	}
	return (a);
}


t_list *sort_a_full(t_list *a, t_list **b)
{
	int max_index_b;
	int rot;

	while((*b) != NULL)
	{
		max_index_b = search_max_index((*b));
		rot = firsrt_or_sec_search((*b),max_index_b);
		while((*b) -> index != max_index_b)
		{
			if(rot == 1)
				(*b) = rb((*b), 1);
			else if (rot == 2)
				(*b) = rrb((*b), 1);
			else
				break;
		}
		if((*b) -> index == max_index_b)
			a = pa(&(*b),a);
	}
	return (a);
}

t_list *sort_list(t_list *a, t_list *b)
{
	int _20;
	int _100;

	_100 = ft_lstsize(a);
	while(ft_lstsize(a) > 1)
	{
		if(_100 > 100)
		{
			_20 = (ft_lstsize(a) * 0.14) + ft_lstsize(b);

			if((ft_lstsize(a) * 0.14) >= 1 && _20)
				a = sort_20(a, &b, _20, _100, 15);
			else
			{
				if(a -> index == _100)
					a = ra(a, 1);
				b = pb(&a,b);
			}
		}
		else
		{
			_20 = (ft_lstsize(a) * 0.25) + ft_lstsize(b);

			if((ft_lstsize(a) * 0.25) >= 1 && _20)
				a = sort_20(a, &b, _20, _100, 6);
			else
			{
				if(a -> index == _100)
					a = ra(a, 1);
				b = pb(&a,b);
			}
		}

	}
	a = sort_a_full(a,&b);
	return (a);
}