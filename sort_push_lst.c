/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:47:00 by hozdemir          #+#    #+#             */
/*   Updated: 2022/12/06 01:17:00 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

t_list *sort_20(t_list *a, t_list **b, int _20, int _100)
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
				a = ra(a);
			else if (rot == 2)
				a = rra(a);
			else
				break;
		}
		if(a -> index <= _20  && a -> index != _100)
			(*b) = pb(&a,(*b));
		indexx++;
	}
	return (a);
}

t_list *sort_a_full(t_list *a, t_list **b, int _100)
{
	int max_index_b;
	int rot;

	while((*b) != NULL)
	{
		max_index_b = max_index((*b),_100);
		rot = firsrt_or_sec_search((*b),max_index_b);
		while((*b) -> index != max_index_b)
		{
			if(rot == 1)
				(*b) = rb((*b));
			else if (rot == 2)
				(*b) = rrb((*b));
			else
				break;
		}
		if((*b) -> index == max_index_b)
			a = pa(&(*b),a);
	}
	return (a);
}



t_list *sort_a_big_full(t_list *a, t_list **b,int _100)
{
	int _20;
	int count = 1;
	int rot;
	int min;
	int _80 = _100 * 0.8;
	while(((*b) != NULL || check_sort_list_2(a) == 0))
	{
		if(ft_lstsize(a) <= _100 / 2)
			break;
		if(ft_lstsize((*b)) >= (_100 - _80))
		{
			_20 = ft_lstsize((*b)) * 0.10;
			while(_20 >= 0 && (*b) != NULL)
			{
				a = pa(&(*b),a);
				_20--;
			}
		}
		else
			while((*b) != NULL)
				a = pa(&(*b),a);
		while(check_sort_list_2(a) == 0)
		{
			min = search_min_index(a, _100);
			while(a -> index != min)
			{
				rot = firsrt_or_sec_search(a,min);
				if(rot == 1)
					a = ra(a);
				else if (rot == 2)
					a = rra(a);
				else
					break;
			}
			if(a -> index == min)
			{
				(*b) = pb(&a,(*b));
				count++;
			}
		}
		while(count >= 1 && (*b) != NULL)
		{
			a = pa(&(*b),a);
			count--;
		}
	}
	a = sort_a_full(a,&(*b),_100);
	return (a);
}

t_list *sort_list(t_list *a, t_list *b)
{
	int _20;
	int _80;
	int _100;

	_100 = ft_lstsize(a);
	_80 = ft_lstsize(a) * 0.84;
	while(ft_lstsize(a) > 1)
	{
		_20 = (ft_lstsize(a) * 0.1) + ft_lstsize(b);

		if((ft_lstsize(a) * 0.1) >= 1 && _20 <= _80)
			a = sort_20(a, &b, _20, _100);
		else
		{
			if(a -> index == _100)
				a = ra(a);
			b = pb(&a,b);
		}
	}
	if(_100 <= 100)
		a = sort_a_full(a,&b,_100);
	else
		a = sort_a_big_full(a,&b,_100);
	return (a);
}