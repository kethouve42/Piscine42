/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:49:36 by kethouve          #+#    #+#             */
/*   Updated: 2023/09/02 17:13:54 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <unistd.h>

void	ft_put_tab(int *rl, char *col)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while(rl[i] && col[j])
	{
		if (col[j] && col[j] <= '4')
		{	
			write(1, &col[j], 1);
			col[j] = col[j] + 1;
			j++;
		}
		i++;
		write(1,&sl, 1);
		if (rl[i] > '1' && rl[i] <= '4')
		{
			col[j] -= 3;
		}
		i++;
	}
}

int	main()
{
	int	*rl = (int *) malloc(4 * sizeof(int));
	char	col[] = "1234";
	ft_put_tab(rl, col);
	free(rl);
	return (0);
}*/

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char n)
{
	write(1, &n, 1);
}

void ft_put_tab(int *rl, int *col)
{
    int i = 0;
    int j = 0;

    while (col[j] < 4)
    {
        while (rl[i] < 4)
        {
            write(1, &col, 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    ft_putchar(col % 10 + '0');
}

int main()
{
    int *rl = (int *)malloc(4 * sizeof(int));
    int col[] = 1;
    ft_put_tab(rl, col);
    free(rl);
    return (0);
}
