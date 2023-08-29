/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:01:19 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/29 15:50:47 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((str[i] > 47 && str[i] < 58)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("%s\n%s\n%s\n",
			ft_str_is_numeric("")?"OK":"Fail",
			ft_str_is_numeric("1ABq2rstuv4w5xyz")?"OK":"Fail",
			ft_str_is_numeric("0")?"OK":"Fail");
}*/
