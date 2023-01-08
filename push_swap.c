/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:51:30 by hozdemir          #+#    #+#             */
/*   Updated: 2023/01/08 08:47:52 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

int	main(int count, char **arg)
{
	t_list	*a;
	t_list	*b;
	int		size;

	a = in_a(arg);
	b = NULL;
	size = ft_lstsize(a);
	if (size <= 1 && count)
		return (0);
	index_list(a, size);
	if (check_sort_list(a))
		exit(0);
	if (size < 6)
		a = sort_list_four(a, b, size);
	else
		a = sort_list(a, b, size);
}
