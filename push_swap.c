/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:51:30 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/14 05:12:16 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ifmai.h"

int main(int count, char **arg)
{
	t_list	*a;
	t_list	*b;

	b = malloc(sizeof(t_list));
	a = in_a(arg);
	if(ft_lstsize(a) <= 1 && count)
		return (0);
	while(a != NULL)
	{
		printf("%d - ",a -> content);
		a = a -> next;
	}
}