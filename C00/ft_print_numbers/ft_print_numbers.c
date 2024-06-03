#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    int i;
    i = 0;

    while(i <= 9)
    {
        ft_putchar(i + '0');
        i++;
    }
}

/*
La funzione ft_print_numbers stampa i numeri da 0 a 9 sullo standard output
    int i; dichiara una variabile i di tipo intero
    i = 0; inizializza i a 0

Il ciclo while(i <= 9) continua a iterare finché i è minore o uguale a 9

All'interno del ciclo, ft_putchar(i + '0'); viene chiamata per convertire il numero i nel corrispondente carattere ASCII e scriverlo sullo standard output

    i + '0' sfrutta il fatto che i caratteri numerici in ASCII sono consecutivi, con '0' che ha il valore ASCII 48. Quindi, aggiungendo i a '0', otteniamo il valore ASCII del carattere numerico corrispondente

i++; incrementa i per passare al numero successivo

Questo approccio mostra come convertire numeri interi in caratteri ASCII e come utilizzare funzioni di supporto per modularizzare il codice in C
*/

/* oppure ...
void ft_print_numbers(void)
{
    char i = '0';

    while(i <= '9')
    {
        write(1, &i, 1);
        i++
    }
}*/