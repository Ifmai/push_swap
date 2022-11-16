/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:22:00 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/16 04:21:37 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

void	sa(t_list *a)
{
	int temp;
	int temp_index;

	temp_index = a->index;
	temp = a->content;
	a->content = a->next->content;
	a->index = a->next->index;
	a->next->content = temp;
	a->next->index = temp_index;
	write(1,"sa\n",3);
}

void	sb(t_list *b)
{
	int temp;

	temp = b->content;
	b->content = b->next->content;
	b->next->content = temp;
	write(1,"sb\n",3);
}

void	ss(t_list *a, t_list *b)
{
	sa(a);
	sb(b);
}

t_list *pb(t_list **a, t_list *b)
{
	ft_lstadd_front(&b,ft_lstnew((*a)->content));
	b->index = (*a)->index;
	(*a) = (*a)->next;
	free((*a)->back);
	write(1,"pb\n",3);
	return(b);
}

t_list *pa(t_list **b, t_list *a)
{
	ft_lstadd_front(&a,ft_lstnew((*b)->content));
	a->index = (*b)->index;
	(*b) = (*b)->next;
	free((*b)->back);
	write(1,"pa\n",3);
	return(a);
}

t_list *ra(t_list *a)
{
	ft_lstadd_back(&a,ft_lstnew(a->content));
	ft_lstlast(a)->index = a->index;
	a = a->next;
	free(a->back);
	write(1,"ra\n",3);
	return (a);
}

t_list *rb(t_list *b)
{
	ft_lstadd_back(&b,ft_lstnew(b->content));
	ft_lstlast(b)->index = b->index;
	b->content = 0;
	b->index = 0;
	b = b->next;
	write(1,"rb\n",3);
	return (b);
}

t_list *rra(t_list *a)
{
	int temp;
	int	temp_index;

	temp_index = ft_lstlast(a)->index;
	temp = ft_lstlast_int(a);
	free(ft_lstlast(a));
	ft_lstlast_back(a)-> next = NULL;
	ft_lstadd_front(&a,ft_lstnew(temp));
	a->index = temp_index;
	write(1,"rra\n",4);
	return (a);
}

t_list *rrb(t_list *b)
{
	int temp;
	int	temp_index;

	temp_index = ft_lstlast(b)->index;
	temp = ft_lstlast_int(b);
	free(ft_lstlast(b));
	ft_lstlast_back(b) -> next = NULL;
	ft_lstadd_front(&b,ft_lstnew(temp));
	b->index = temp_index;
	write(1,"rrb\n",4);
	return (b);
}

int check_sort_list(t_list *a,int size)
{
	int	i;

	i = 1;
	while(i <= size)
	{
		if(a->index != i)
			return 0;
		a = a->next;
		i++;
	}
	return (1);
}

int serach_half_min(t_list *a, int size)
{
	int	i;
	t_list *curr;

	curr = a;

	i = 1;
	while(i <= size / 2)
	{
		if(curr->index == search_min_index(a,size))
			return (1);
		curr = curr->next;
		i++;
	}
	return (0);
}
