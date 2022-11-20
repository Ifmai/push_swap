/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifmai.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:40:58 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/19 14:23:28 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IFMAI_H
# define IFMAI_H

#include "my_library/my_library.h"
#include <unistd.h>

//Silincek bu kütüphane//
#include <stdio.h>
/////////////////////////

void	sa(t_list *sort_list);
void	sb(t_list *b);
void	ss(t_list *a, t_list *b);
int check_sort_list(t_list *a,int size);
int serach_half_min(t_list *a, int size);

void print_list(t_list *a,t_list *b);

t_list	*pb(t_list **a, t_list *b);
t_list	*pa(t_list **b, t_list *a);
t_list	*ra(t_list *a);
t_list	*rb(t_list *b);
t_list *rra(t_list *a);
t_list *rrb(t_list *b);

t_list *sort_list_tree(t_list *a,t_list *b, int size);
t_list *sort_list_four(t_list *a, t_list *b, int size);
t_list *sort_list_five(t_list *a, t_list *b, int size);
t_list *sort_list(t_list *a, t_list *b, int size);

#endif
