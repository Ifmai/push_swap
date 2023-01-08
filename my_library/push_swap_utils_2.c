/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 23:44:18 by hozdemir          #+#    #+#             */
/*   Updated: 2023/01/08 09:00:57 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

int	firsrt_or_sec_a(t_list *a, int _20)
{
	t_list	*cur;
	int		size;
	int		len;

	len = 0;
	size = ft_lstsize(a);
	cur = a;
	while (len <= size / 2)
	{
		if (cur->index <= _20)
			return (1);
		cur = cur->next;
		len++;
	}
	while (cur != NULL)
	{
		if (cur->index <= _20)
			return (2);
		cur = cur->next;
	}
	return (0);
}

int	a_min_b_firsrt_or_sec(t_list *a, int _20)
{
	t_list	*cur;
	int		size;
	int		len;

	len = 0;
	size = ft_lstsize(a);
	cur = a;
	while (len <= size / 2)
	{
		if (cur->index >= _20)
			return (1);
		cur = cur->next;
		len++;
	}
	while (cur != NULL)
	{
		if (cur->index >= _20)
			return (2);
		cur = cur->next;
	}
	return (0);
}

int	firsrt_or_sec_search(t_list *a, int search_index)
{
	t_list	*cur;
	int		size;
	int		len;

	len = 0;
	size = ft_lstsize(a);
	cur = a;
	while (len <= size / 2)
	{
		if (cur->index == search_index)
			return (1);
		cur = cur->next;
		len++;
	}
	while (cur != NULL)
	{
		if (cur->index == search_index)
			return (2);
		cur = cur->next;
	}
	return (0);
}

int	check_sort_list(t_list *a)
{
	t_list	*curr;
	t_list	*curr_2;

	curr = a;
	while (curr != NULL)
	{
		curr_2 = curr->next;
		while (curr_2 != NULL)
		{
			if (curr->index > curr_2->index)
				return (0);
			curr_2 = curr_2->next;
		}
		curr = curr->next;
	}
	return (1);
}

int	serach_half_min(t_list *a, int size)
{
	int		i;
	t_list	*curr;

	curr = a;
	i = 1;
	while (i <= size / 2)
	{
		if (curr->index == search_min_index(a, size))
			return (1);
		curr = curr->next;
		i++;
	}
	return (0);
}
