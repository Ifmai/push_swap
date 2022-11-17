/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 01:39:08 by hozdemir          #+#    #+#             */
/*   Updated: 2022/11/18 02:23:59 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"


int ft_check_sup(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if(!(ft_isdigit(s[i])) && !(ft_isalpha(s[i])) && s[i] != 32 && s[i] != '+' && s[i] != '-')
			arg_split();
		i++;
	}
	return (32);
}

int ft_check_int(long a)
{
	if (a > 2147483647)
		return (1);
	if (a < -2147483648)
		return (1);
	return (0);
}

int ft_check_str(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if(ft_isalpha(s[i]))
			return (1);
		i++;
	}
	return (0);
}

void	arg_alphabet_error(void)
{
	ft_putstr_fd("Uygunsuz Argüman Girişi !", 1);
	exit(0);
}

void	arg_split(void)
{
	ft_putstr_fd("Geçersiz Kelime Ayarçı Kullanımı", 1);
	exit(0);
}

void	limit_eror(void)
{
	ft_putstr_fd("Girdiğiniz sayı int sınırı geçiyor !", 1);
	exit(0);
}

void	error_same_digit(void)
{
	ft_putstr_fd("Aynı sayıdan iki tane olmaz !", 1);
	exit(0);
}