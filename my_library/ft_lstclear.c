/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:55:37 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/16 14:46:15 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*cnext;

	if (!lst || !*lst)
		return ;
	cnext = (*lst);
	while (cnext != (NULL))
	{
		cnext = (*lst)->next;
		((*lst)->content) = 0;
		free(*lst);
		(*lst) = cnext;
	}
}
