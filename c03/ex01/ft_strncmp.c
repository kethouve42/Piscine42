/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:31:31 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/30 12:44:02 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	c;

	c = strncmp(s1, s2, n);
	return (c);
}

int	main(void)
{
	char	s1[] = "hetlo";
	char	s2[] = "helLp";
	unsigned int	n = 3;
	int	cmp = ft_strncmp(s1, s2, n);

	printf("%d", cmp);
}
