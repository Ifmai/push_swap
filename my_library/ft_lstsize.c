/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:56:03 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/30 01:12:25 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*iter;
	int		i;

	iter = lst;
	i = 0;
	while (iter != NULL)
	{
		i++;
		iter = iter->next;
	}
	return (i);
}
