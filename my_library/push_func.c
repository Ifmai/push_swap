/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:22:00 by hozdemir          #+#    #+#             */
/*   Updated: 2022/12/06 02:04:26 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

void	sa(t_list *a, int flag)
{
	int temp;
	int temp_index;

	temp_index = a->index;
	temp = a->content;
	a->content = a->next->content;
	a->index = a->next->index;
	a->next->content = temp;
	a->next->index = temp_index;
	if(flag == 1)
		write(1,"sa\n",3);
}

void	sb(t_list *b, int flag)
{
	int temp;
	int temp_index;

	temp_index = b->index;
	temp = b->content;
	b->content = b->next->content;
	b->index = b->next->index;
	b->next->content = temp;
	b->next->index = temp_index;
	if(flag == 1)
		write(1,"sb\n",3);
}

void	ss(t_list *a, t_list *b)
{
	sa(a,0);
	sb(b,0);
	write(1,"ss\n",3);
}

t_list *pb(t_list **a, t_list *b)
{
	t_list *freez;

	freez = (*a);
	ft_lstadd_front(&b,ft_lstnew((*a)->content,(*a)->index));
	(*a) = (*a)->next;
	free(freez);
	write(1,"pb\n",3);
	return(b);
}

t_list *pa(t_list **b, t_list *a)
{
	t_list *freez;

	freez = (*b);
	ft_lstadd_front(&a,ft_lstnew((*b)->content,(*b)->index));
	(*b) = (*b)->next;
	free(freez);
	write(1,"pa\n",3);
	return(a);
}

t_list *ra(t_list *a, int flag)
{
	t_list *freez;

	freez = a;
	ft_lstadd_back(&a,ft_lstnew((a->content),(a->index)));
	a = a->next;
	free(freez);
	if(flag == 1)
		write(1,"ra\n",3);
	return (a);
}

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