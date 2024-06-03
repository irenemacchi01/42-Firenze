#include <stdio.h>

void ft_swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
int main() {
    int x = 5;
    int y = 10;

    printf("Prima dello scambio: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("Dopo lo scambio: x = %d, y = %d\n", x, y);

    return 0;
}
*/