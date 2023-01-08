/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozdemir <hozdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 01:39:08 by hozdemir          #+#    #+#             */
/*   Updated: 2023/01/08 09:17:50 by hozdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

int	ft_check_str(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isalpha(s[i]))
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
	ft_putstr_fd("Geçersiz Kelime Ayraç Kullanımı", 1);
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
