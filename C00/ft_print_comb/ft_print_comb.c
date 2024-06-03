#include <unistd.h>

void print_combination(char i, char j, char k)
{
    write(1, &i, 1);
    write(1, &j, 1);
    write(1, &k, 1);

    if (!(i == '7' && j == '8' && k == '9')) {
        write(1, ", ", 1);
    }
}

void ft_print_comb(void)
{
    char i = '0';
    char j;
    char k;

    // Ciclo per la prima cifra (centinaia)
    while (i <= '7') {
        j = i + 1; 

        // Ciclo per la seconda cifra (decine)
        while (j <= '8') {
            k = j + 1; 

            // Ciclo per la terza cifra (unità)
            while (k <= '9') {
                // Chiamata alla funzione per stampare la combinazione corrente
                print_combination(i, j, k);
                k++; 
            }
            j++; 
        }
        i++;
    }
}