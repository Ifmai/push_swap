/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:45:54 by hozdemir          #+#    #+#             */
/*   Updated: 2022/12/05 17:41:57 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

int search_min_index(t_list *a,int size)
{
	int min;

	min = size;
	while(a != NULL)
	{
		if(a->index <= min )
			min = a->index;
		a = a->next;
	}
	return (min);
}

int search_max_index(t_list *curr)
{
	int max;

	max = 1;
	while(curr != NULL)
	{
		if (max <= curr ->index)
			max = curr -> index;
		curr = curr -> next;
	}
	return (max);
}


void	ft_check_array(t_list *numbers)
{
	int i;
	int j;
	int z;
	int	*check_array;

	i = ft_lstsize(numbers);
	j = 0;
	check_array = malloc(i * sizeof(int));
	while(numbers != NULL)
	{
		check_array[j++] = numbers->content;
		numbers = numbers->next;
	}
	z = -1;
	while(++z < i)
	{
		j = z + 1;
		while(j < i)
		{
			if(check_array[j] == check_array[z])
				error_same_digit();
			j++;
		}
	}
	free(check_array);
}

t_list *in_a(char **arg)
{
	t_list	*a;
	char	**arg_new;
	int		arg_index;
	int		arg_index_new;

	arg_index = 1;
	a = NULL;
	while(arg[arg_index] != 0)
	{
		arg_index_new = 0;
		arg_new = ft_split(arg[arg_index],ft_check_sup(arg[arg_index]));
		while(arg_new[arg_index_new])
		{	
			ft_lstadd_back(&a,ft_lstnew(ft_atoi(arg_new[arg_index_new]),0));
			arg_index_new++;
		}
		arg_index_new = 0;
		while(arg_new[arg_index_new])
		{
			free(arg_new[arg_index_new]);
			arg_index_new++;
		}
		free(arg_new);
		arg_index++;
	}
	ft_check_array(a);
	return (a);
}