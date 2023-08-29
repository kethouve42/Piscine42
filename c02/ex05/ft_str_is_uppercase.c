/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:22:54 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/29 16:25:51 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((str[i] > 64 && str[i] < 91)))
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
                        ft_str_is_uppercase("")?"OK":"Fail",
                        ft_str_is_uppercase("abcdABCD")?"OK":"Fail");
}*/
