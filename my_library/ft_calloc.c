
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:59:29 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/14 00:59:31 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;
	size_t	req;

	req = count * size;
	rtn = malloc(req);
	if (!rtn)
		return (0);
	ft_memset(rtn, 0, req);
	return (rtn);
}