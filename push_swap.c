/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:51:30 by hozdemir          #+#    #+#             */
/*   Updated: 2022/12/06 05:53:13 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

void print_list(t_list *a)
{
	printf("/////////////////////////////////////////\n");
	while(a != NULL)
	{
		printf("a sayi : %d index : %d |\n",a->content ,a ->index);
		a = a ->next;
	}
	printf("-------------------------------------\n");
}

t_list *sort_list_tree(t_list *a,t_list *b, int size)
{
	if(check_sort_list(a,size))
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
	if(check_sort_list(a,size))
		exit(0);
	b = pb(&a,b);
	a = sort_list_tree(a, b,size);
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
	if(check_sort_list(a,size))
		exit(0);
	b = pb(&a,b);
	a = sort_list_four(a, b, size);
	return (a);
}



int main(int count, char **arg)
{
	t_list	*a;
	t_list	*b;
	int		size;

	a = in_a(arg);
	b = NULL;
	size = ft_lstsize(a);
	if(size <= 1 && count)
		return (0);
	index_list(a,size);
	if(size == 3 || size == 2)
		a = sort_list_tree(a,b,size);
	else if(size == 4)
		a = sort_list_four(a,b,size);
	else if(size == 5)
		a = sort_list_five(a,b,size);
	else 
		a = sort_list(a, b);
}
