/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:54:28 by hozdemir          #+#    #+#             */
/*   Updated: 2023/01/08 09:17:46 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

int	search_min(t_list *a)
{
	int	min;

	min = 2147483647;
	while (a != NULL)
	{
		if (a->content <= min && a->index == 0)
			min = a->content;
		a = a->next;
	}
	return (min);
}

void	index_list(t_list *a, int size)
{
	t_list	*curr;
	int		i;
	int		min;

	i = 1;
	min = search_min(a);
	curr = a;
	while (i != size + 1)
	{
		if (curr ->content == min)
		{
			curr->index = i;
			min = search_min(a);
			i++;
		}
		curr = curr->next;
		if (!curr)
			curr = a;
	}
}

void	ss(t_list *a, t_list *b)
{
	sa(a, 0);
	sb(b, 0);
	write(1, "ss\n", 3);
}

int	ft_check_sup(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!(ft_isdigit(s[i])) && !(ft_isalpha(s[i])) \
			&& s[i] != 32 && s[i] != '+' && s[i] != '-')
			arg_split();
		i++;
	}
	return (32);
}

int	ft_check_int(long a)
{
	if (a > 2147483647)
		return (1);
	if (a < -2147483648)
		return (1);
	return (0);
}
