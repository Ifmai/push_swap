/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:47:00 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/27 19:46:14 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

t_list *sort_50(t_list *a, t_list **b, int _50)
{
	int	rot;
	int indexx;

	indexx = 1;
	while(indexx <= _50 && ft_lstsize(a) > 3)
	{
		rot = firsrt_or_secend(a,_50);
		while (a -> index > _50)
		{
			if(rot == 1)
				a = ra(a);
			else if (rot == 2)
				a = rra(a);
			else
				break;
		}
		if(a -> index <= _50)
			(*b) = pb(&a,(*b));
		indexx++;
	}
	return (a);
}

t_list *sort_list(t_list *a, t_list *b)
{
	int _50;
	while(ft_lstsize(a) > 3)
	{
		_50 = (ft_lstsize(a) * 0.3) + ft_lstsize(b);
		if((ft_lstsize(a) * 0.3) >= 1)
			a = sort_50(a, &b, _50);
		else
			b = pb(&a,b);
	}
	return (a);
}