#include <stdio.h>

int ft_strlen(char *str) 
{
    int length;
    length = 0;

    // Itera attraverso la stringa finché non si raggiunge il terminatore null
    // e incrementa la lunghezza ad ogni iterazione
    while (*str != '\0') 
    {
        length++;
        str++;
    }

    return length; // Restituisce la lunghezza calcolata della stringa
}

/*
int main(void){
    char nome[] = "irene";
    int l = ft_strlen(nome);

    printf("La lunghezza è di %d", l);
    return(0);
}
*/

/*
La funzione strlen è una funzione standard del linguaggio C che restituisce la lunghezza di una stringa, cioè il numero di caratteri prima del terminatore null ('\0')

Come funziona?

Prende in input un puntatore a una stringa (un array di caratteri)
    Itera attraverso la stringa finché non trova il terminatore null ('\0'), contando il numero di caratteri durante l'attraversamento
            Una volta trovato il terminatore null, restituisce il numero di caratteri contati, che rappresenta la lunghezza della stringa
*/