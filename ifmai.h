/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifmai.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:40:58 by hozdemir          #+#    #+#             */
/*   Updated: 2023/01/08 08:47:24 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IFMAI_H
# define IFMAI_H

# include "my_library/my_library.h"
# include <unistd.h>

t_list	*sort_list_tree(t_list *a, int size);
t_list	*sort_list_four(t_list *a, t_list *b, int size);
t_list	*sort_list_five(t_list *a, t_list *b, int size);
t_list	*sort_list(t_list *a, t_list *b, int _100);

#endif
