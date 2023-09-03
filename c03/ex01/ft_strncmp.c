/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:31:31 by kethouve          #+#    #+#             */
/*   Updated: 2023/09/02 18:46:01 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hetLp";
	unsigned int	n = 3;

	printf("%d", ft_strncmp(s1, s2, n));
}*/
