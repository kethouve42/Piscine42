/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:08:18 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/29 16:27:30 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((str[i] > 96 && str[i] < 123)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        printf("%s\n%s\n",
                        ft_str_is_lowercase("")?"OK":"Fail",
                        ft_str_is_lowercase("abcdABCD")?"OK":"Fail");
}*/
