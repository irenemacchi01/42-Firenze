#include <unistd.h>

void print_combination(int i, int j)
{
    write(1, &(i / 10 + '0', 1));
    write(1, &(i % 10 + '0', 1));
    write(1, " ", 1);
    write(1, &(j / 10 + '0', 1));
    write(1, &(j % 10 + '0', 1));

    if(i < 98)
    {
        write(1, ", ", 2);
    }
}

void ft_print_comb2(void)
{
    int i = 0, j = 0;

    while (i <= 9) {
        j = 0; 

        while (j <= 9) {
            print_combination(i, j);
            j++; 
        }
        i++; 
    }
}

