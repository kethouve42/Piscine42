/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <kethouve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:17:36 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/23 17:27:44 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet()
{
	char	c = 'a';

	while (c <= 'z')
		{
			write(1, &c, 1);
			c++;
		}
}

int	main()
{
	ft_print_alphabet ();
	return 0;
}
