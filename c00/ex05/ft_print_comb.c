/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <kethouve@42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:42:06 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/28 09:51:09 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_show(char a, char b, char c)
{
	a = '0' + a;
	b = '0' + b;
	c = '0' + c;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	print_fusion(char a, char b, char c)
{
	char	s;
	char	v;

	s = ' ';
	v = ',';
	ft_show(a, b, c);
	if (a < 7 || b < 8 || c < 9)
	{
		write(1, &v, 1);
		write(1, &s, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_fusion(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
