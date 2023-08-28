/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <kethouve@42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:04:02 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/28 09:58:48 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_fuse(char e, char f, char g, char h)
{
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, " ", 1);
	write(1, &g, 1);
	write(1, &h, 1);
	if (!(e == '9' && f == '8' && g == '9' && h == '9'))
	{
		write(1, ",", 1);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = b + 1;
				while (d <= '9')
				{
					ft_fuse(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
