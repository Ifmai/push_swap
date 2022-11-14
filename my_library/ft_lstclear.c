/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:55:37 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/13 22:57:53 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

void	ft_lstclear(t_list **lst, void (del)(int))
{
	t_list	*cnext;

	if (!lst || !del || !*lst)
		return ;
	cnext = (*lst);
	while (cnext != (NULL))
	{
		cnext = (*lst)->next;
		(del)((*lst)->content);
		free(*lst);
		(*lst) = cnext;
	}
}
