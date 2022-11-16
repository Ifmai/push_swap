/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:54:28 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/16 02:16:18 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

int search_min(t_list *a)
{
	int min;

	min = 2147483647;
	while(a != NULL)
	{
		if(a->content <= min && a->index == 0)
			min = a->content;
		a = a->next;
	}
	return (min);
}
void	index_list(t_list *a, int size)
{
	t_list *curr;
	int	i;
	int	min;

	i = 1;
	min = search_min(a);
	curr = a;
	while(i != size + 1)
	{
		if(curr ->content == min)
		{
			curr->index = i;
			min = search_min(a);
			i++;
		}
		curr = curr->next;
		if(!curr)
			curr = a;
	}
}