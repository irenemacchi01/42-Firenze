#include <unistd.h>

void print_combination(char i, char j, char k)
{
    write(1, &i, 1);
    write(1, &j, 1);
    write(1, &k, 1);

    // Se la combinazione non è '789', aggiungere una virgola e uno spazio
    if (!(i == '7' && j == '8' && k == '9')) {
        // Scrivere la virgola e lo spazio
        write(1, ", ", 2); // Scrivere 2 come spazio perché si tratta di due caratteri (virgola e spazio)
    }
}

void ft_print_comb(void)
{
    char i = '0'; // Inizializzare la prima cifra (centinaia) a '0'
    char j;
    char k;

    // Ciclo per la prima cifra (centinaia)
    while (i <= '7') { // La prima cifra varia da '0' a '7'
        j = i + 1; // Inizializzare la seconda cifra (decine) a un valore superiore alla prima cifra 

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
