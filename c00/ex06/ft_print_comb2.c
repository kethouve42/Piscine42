/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <kethouve@42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:04:02 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/26 14:58:44 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	s;
	char	v;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_fuse(a, b, s, v);
			b++;
		}
		a++;
	}
}

void	ft_fuse(char a, char b, char s, char v)
{
	a = '0' + a;
	b = '0' + b;
	v = ',';
	s = ' ';
	if (a < 98 || b < 99)
	{
		write(1, &a, 1);
		write(1, &s, 1);
		write(1, &b, 1);
		write(1, &v, 1);
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
