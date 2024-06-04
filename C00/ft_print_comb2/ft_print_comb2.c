#include <unistd.h>

void print_combination(int i, int j)
{
    write(1, &(i / 10 + '0'), 1);
    write(1, &(i % 10 + '0'), 1);
    write(1, " ", 1);
    write(1, &(j / 10 + '0'), 1);
    write(1, &(j % 10 + '0'), 1);

    if(i < 98)
    {
        write(1, ", ", 2);
    }
}

/*Scrittura delle cifre: La funzione usa write per scrivere ogni cifra dei numeri i e j convertiti in caratteri. 
Questo viene fatto usando l'operazione i / 10 + '0' per ottenere la prima cifra e i % 10 + '0' per ottenere la seconda cifra.*/

void ft_print_comb2(void)
{
    int i = 0, j = 0;

    // Ciclo esterno per le decine del primo numero (da 0 a 9)
    while (i <= 9) {
        j = 0; // Resettare j a 0 per ogni iterazione di i

        // Ciclo interno per le unità del secondo numero (da 0 a 9)
        while (j <= 9) {
            // Chiamare la funzione print_combination per stampare la combinazione attuale di i e j
            print_combination(i, j);
            j++; // Incrementare j per passare alla prossima combinazione possibile
        }
        i++; // Incrementare i per passare alla prossima decina per il primo numero
    }
}
