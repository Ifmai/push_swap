/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:47:00 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/20 04:56:34 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

t_list *_40_sort(t_list *a, t_list **b , int size , int _40)
{
	int index;
	int rot;


	index = 0;
	while (index != _40  )
	{
		rot = serach_half_min(a,ft_lstsize(a));
		while (a -> index != search_min_index(a,size))
		{
			if(rot == 0)
				a = rra(a);
			else
				a = ra(a);
		}
		(*b) = pb(&a,(*b));
		index++;
	}
	//print_list(a,(*b));
	return (a);
}

t_list *_30_sort(t_list *a, t_list **b , int size , int _30)
{
	int index;
	int rot;

	index = 0;
	while (index != _30   )
	{
		rot = serach_half_min(a,ft_lstsize(a));
		while (a -> index != search_min_index(a,size))
		{
			if(rot == 0)
				a = rra(a);
			else
				a = ra(a);
		}
		(*b) = pb(&a,(*b));
		index++;
	}
	//print_list(a,(*b));

	return (a);
}

t_list *_20_sort(t_list *a, t_list **b , int size , int _20)
{
	int index;
	int rot;

	 
	index = 0;
	while (index != _20 )
	{
		rot = serach_half_min(a,ft_lstsize(a));
		while (a -> index != search_min_index(a,size))
		{
			if(rot == 0)
				a = rra(a);
			else
				a = ra(a);
		}
		(*b) = pb(&a,(*b));
		index++;
	}
	//print_list(a,(*b));

	return (a);
}

t_list *_10_sort(t_list *a, t_list **b , int size , int _10)
{
	int index;
	int rot;

	 
	index = 0;
	while (index != _10)
	{
		rot = serach_half_min(a,ft_lstsize(a));
		while (a -> index != search_min_index(a,size))
		{
			if(rot == 0)
				a = rra(a);
			else
				a = ra(a);
		}
		(*b) = pb(&a,(*b));
		index++;
	}
	//print_list(a,(*b));

	return (a);
}

t_list *sort_list(t_list *a, t_list *b, int size)
{
	int _40;
	int _30;
	int _20;
	int _10;

	
	_40 = size * 0.4;
	_30 = size * 0.3;
	_20 = size * 0.2;
	_10 = size * 0.1;

/*	printf("|||40||| %d \n",_40);
	printf("|||30||| %d \n",_30);
	printf("|||20||| %d \n",_20);
	printf("|||10||| %d \n",_10);
	printf("|||||%d count", size);*/

	a = _40_sort(a,&b,size,_40);
	a = _30_sort(a,&b,size,_30);
	a = _20_sort(a,&b,size,_20);
	a = _10_sort(a,&b,size,_10);
	/*if(ft_lstsize(a) == 5)
		a = sort_list_five(a, b,size);*/
	while(ft_lstsize(b))
		a = pa(&b,a);
	print_list(a,b);

	return (a);
}