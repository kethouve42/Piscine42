/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:29:18 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/29 17:34:32 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int     main(void)
{
        char    a[] = "abc";
        char    b[] = "AbCdEf";

        printf("%s\n%s\n",
                       ft_strlowcase(a),
                       ft_strlowcase(b));
}*/
