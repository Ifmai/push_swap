/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:43:33 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/14 13:46:22 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "my_library.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int	ft_lstlast_int(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst -> content);
}

void	ft_lstlast_free(t_list **lst)
{
	t_list *iter;

	iter = (*lst);
	if (!lst)
		return ;
	while (iter->next->next != NULL)
	{
		iter = iter->next;
	}
	iter->next = NULL;
}