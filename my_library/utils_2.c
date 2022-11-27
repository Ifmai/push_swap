/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 23:44:18 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/27 18:50:02 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

int	firsrt_or_secend(t_list *a, int _50)
{
	t_list *cur;
	int size;
	int len = 0;

	size = ft_lstsize(a);
	cur = a;
	while(len <= size / 2)
	{
		if(cur -> index <= _50)
			return(1);
		cur = cur -> next;
		len++;
	}
	while(cur != NULL)
	{
		if(cur -> index <= _50)
			return(2);
		cur = cur -> next;
	}
	return (0);
}

/*int	firsrt_or_secend(t_list *a, int _50)
{
	t_list *cur;
	int size;

	size = ft_lstsize(a);
	cur = a;
	while(cur != NULL)
	{
		if(cur -> index <= _50)
			break;
		cur = cur -> next;
	}
	if(cur -> index <= size / 2 && cur != NULL)
		return (1);
	else if (cur ->index > size /2 && cur != NULL)
		return (2);
	else
		return (0);
}*/
