#include <unistd.h>

void	ft_putchar(char del, char derl, char mel, char merl, int x, int y)
{
	while (y != 0 || y ==1)
        {
                if (x != 0 || x == 1)
                {
                        write(1, &del, 1);
                        x--;
                }
                if (x > 1)
                {
                        write(1, &mel, 1);
                        x--;
                }
                write(1, "\n", 1);
        }
	while (y >1)
        {
                if (x != 0 || x ==1)
                {
                        write(1, &derl, 1);
                        x--;
                }
                if (x > 1)
                {
                        write(1, &merl, 1);
                        x--;
                }
                write(1, "\n", 1);
        }
}

void    rush(int x, int y)
{
	char	del;
	char	derl;
	char	mel;
	char	merl;

	
	del = '0';
	mel = '-';
	derl = '|';
	merl = ' ';
	ft_putchar(del, derl, mel, merl, x, y);
}

int	main()
{
	rush(5, 5);
	return (0);
}
