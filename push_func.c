/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:22:00 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/14 15:31:04 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

void	sa(t_list *a)
{
	int temp;

	temp = a->content;
	a->content = a->next->content;
	a->next->content = temp;
}

void	sb(t_list *b)
{
	int temp;

	temp = b->content;
	b->content = b->next->content;
	b->next->content = temp;
}

void	ss(t_list *a, t_list *b)
{
	sa(a);
	sb(b);
}

t_list *pb(t_list **a, t_list *b)
{
	ft_lstadd_front(&b,ft_lstnew((*a)->content));
	(*a)->content = 0;
	(*a) = (*a)->next;
	return(b);
}

t_list *pa(t_list **b, t_list *a)
{
	ft_lstadd_front(&a,ft_lstnew((*b)->content));
	(*b)->content = 0;
	(*b) = (*b)->next;
	return(a);
}

t_list *ra(t_list *a)
{
	ft_lstadd_back(&a,ft_lstnew(a->content));
	a->content = 0;
	a = a->next;
	return (a);
}

t_list *rb(t_list *b)
{
	ft_lstadd_back(&b,ft_lstnew(b->content));
	b->content = 0;
	b = b->next;
	return (b);
}

t_list *rra(t_list *a)
{
	int temp;

	temp = ft_lstlast_int(a);
	ft_lstlast_free(&a);
	ft_lstadd_front(&a,ft_lstnew(temp));
	return (a);
}

t_list *rrb(t_list *b)
{
	int temp;

	temp = ft_lstlast_int(b);
	ft_lstlast_free(&b);
	ft_lstadd_front(&b,ft_lstnew(temp));
	return (b);
}
