/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:44:30 by kethouve          #+#    #+#             */
/*   Updated: 2023/09/03 18:02:31 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *string)
{
	int	i;
	char	c;

	i = 0;
	while (string[i])
	{
		c = string[i];
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	ft_print(*argv);
}
