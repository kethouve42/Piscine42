#include <unistd.h>

void ft_putchar(char c) /*we launch ft_putchar for writing the parameter we give him rename here c*/
{
    write(1, &c, 1); /*we write the caracter*/
}

void draw_horizontal_line(int width, char del, char mel) /*we launch draw_horizontal_line with int x as int width for the column, the caracter del and mel*/
{
    ft_putchar(del); /*we launch ft_putchar with the parameter del here o*/
    while (width > 2) /*while the column (x in rush width here is superior as 2*/
    {
        ft_putchar(mel); /*we launch ft_putchar with the parameter mel here -*/
        width--; /* we do here x -1 after the first launch, in second launch x = 6 then in third x = 5 etc*/
    }
    if (width > 1) /* if x in rush width here is superior as 1*/
        ft_putchar(del); /* we launch ft_putchar with the parameter del here o*/
    ft_putchar('\n'); /* the we go on the line at the end*/
}

void draw_vertical_line(int width, int height, char derl, char merl) /*we launch the function draw_vertical_line with the parameter width for x, height for y, derl for | and merl for space*/
{
    if (height > 1) /*if height for y is superior as 1*/
    {
        ft_putchar(derl);/*we launch ft_putchar with the parameter derl for |*/
        while (width > 2)/* when width for x (the column)*/
        {
            ft_putchar(merl);/*we launch the function ft_putchar with the parameter merl here the space*/
            width--;/*each time we launch it we do x(width)-1*/
        }
        if (width > 1) /*if width(x) is superior as 1*/
            ft_putchar(derl); /*we launch ft_putchar with the parameter derl here |*/
        ft_putchar('\n');/* then we go on the line*/
    }
    else if (width == 1) /*otherwise if width is egal as 1*/
    {
        ft_putchar(derl);/*we launch ft_putchar with the parameter derl here |*/
        ft_putchar('\n'); /*then we go on the line*/
    }
}

void rush(int x, int y) /*rush is launch with the parameter in main here 10 for x and 7 for y*/
{
    if (x <= 0 || y <= 0) /*if x or y is 0 the programm end*/
        return;
    
    char del = 'o'; /* here we define the caracter we want (declaration of variable)*/
    char mel = '-';
    char derl = '|';
    char merl = ' ';

    if (y >= 1) /*if y is superior as 1 for the line*/
        draw_horizontal_line(x, del, mel); /*we launch the function draw_horizontal_line with x, del and mel in parameter*/
    
    while (y > 2) /*when y (so the line) is superior as 2*/
    {
        draw_vertical_line(x, y, derl, merl); /*we launch the function draw_vertical_line with the parameter x, y, derl and merl*/
        y--;/*each time we do this loop we do y-1*/
    }
    
    if (y > 1)/*if y is superior as 1*/
        draw_horizontal_line(x, del, mel); /*we launch the function draw_horizontal_line with the parameter x, del and mel*/
}

int main()         /*main star the programme*/
{
    rush(10, 7);   /*main call the function rush with 10 and 7 as parameter*/
    return 0;
}



/* Here how the programm work
 * we have:   
 *
 *                     10987654321
 *                           x
 *                7     o--------o
 *                6     |        |
 *                5     |        |
 *                4  y  |        |
 *                3     |        |
 *                2     |        | 
 *                1     o--------o
 *
 *                the programm launch the first line so y7 and it write the column x10, x9 etc, then it  write the second line y6 and the column x etc
 *                then in the we are at y1 and the column x10, x9, x7,...,x1
 *                then the programm end*/
