/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:58:29 by hozdemir          #+#    #+#             */
/*   Updated: 2022/12/11 21:58:31 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

t_list *rb(t_list *b, int flag)
{
	if(b == NULL)
		return b;
	t_list *freez;

	freez = b;
	ft_lstadd_back(&b,ft_lstnew((b)->content,(b)->index));
	b = b->next;
	free(freez);
	if(flag == 1)
		write(1,"rb\n",3);
	return (b);
}

t_list *rra(t_list *a, int flag)
{
	int temp;
	int	temp_index;
	t_list *freez;

	freez = ft_lstlast(a);
	temp_index = ft_lstlast(a)->index;
	temp = ft_lstlast_int(a);
	ft_lstlast_back(a)-> next = NULL;
	free(freez);
	ft_lstadd_front(&a,ft_lstnew(temp,temp_index));
	if(flag == 1)
		write(1,"rra\n",4);
	return (a);
}

t_list *rrb(t_list *b, int flag)
{
	int temp;
	int	temp_index;
	t_list *freez;

	freez = ft_lstlast(b);
	temp_index = ft_lstlast(b)->index;
	temp = ft_lstlast_int(b);
	ft_lstlast_back(b)-> next = NULL;
	free(freez);
	ft_lstadd_front(&b,ft_lstnew(temp,temp_index));
	if(flag == 1)
		write(1,"rrb\n",4);
	return (b);
}

t_list *rr(t_list *a, t_list **b)
{
	a = ra(a, 0);
	(*b) = rb((*b), 0);
	write(1,"rr\n",3);
	return (a);
}

t_list *rrr(t_list *a, t_list **b)
{
	a = rra(a, 0);
	(*b) = rrb((*b), 0);
	write(1,"rrr\n",4);
	return (a);
}