/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_library.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 00:46:33 by acerrah           #+#    #+#             */
/*   Updated: 2022/11/30 19:35:49 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIBRARY_H
# define MY_LIBRARY_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

//Silincek bu kütüphane//
#include <stdio.h>
/////////////////////////

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	int				index;
	struct s_list	*back;
}					t_list;

char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *s);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_isalpha(int c);
int		ft_isdigit(int c);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(int content,int index);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast_back(t_list *lst);

t_list	*ft_lstlast(t_list *lst);
int		ft_lstlast_int(t_list *lst);

int		ft_lstsize(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(int));
void	ft_lstclear(t_list **lst);


t_list	*in_a(char **arg);
void	arg_alphabet_error(void);
void	arg_split(void);
void	limit_eror(void);
int 	ft_check_sup(char *s);
int 	ft_check_str(const char *s);
int 	ft_check_int(long a);
void    error_same_digit(void);
int		search_min(t_list *a);
int		search_min_index(t_list *a,int size);
void	index_list(t_list *a, int size);

void	sa(t_list *sort_list);
void	sb(t_list *b);
void	ss(t_list *a, t_list *b);

t_list	*pb(t_list **a, t_list *b);
t_list	*pa(t_list **b, t_list *a);
t_list	*ra(t_list *a);
t_list	*rb(t_list *b);
t_list *rra(t_list *a);
t_list *rrb(t_list *b);

int check_sort_list(t_list *a,int size);
int check_sort_list_2(t_list *a);
int serach_half_min(t_list *a, int size);

int	firsrt_or_sec_a(t_list *a, int _50);
int	firsrt_or_sec_search(t_list *a, int search_index);
t_list *push_50_arguman(t_list *a, t_list **b, int size);
int max_index(t_list *curr , int search_index);

#endif
