/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:56:00 by hozdemir          #+#    #+#             */
/*   Updated: 2023/01/08 09:14:21 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

t_list	*ft_lstnew(int content, int index)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->index = index;
	node->next = NULL;
	return (node);
}
