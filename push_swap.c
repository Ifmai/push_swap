/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:51:30 by hozdemir          #+#    #+#             */
/*   Updated: 2022/12/11 22:04:28 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

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
		a = sort_list_tree(a,b);
	else if(size == 4)
		a = sort_list_four(a,b,size);
	else if(size == 5)
		a = sort_list_five(a,b,size);
	else 
		a = sort_list(a, b, size);
}
