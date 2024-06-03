#include <unistd.h>

void ft_print_alphabet(void)
{
    int i;
    i = 'a';

    while(i <= 'z')
    {
        write(1, &i, 1);
        i++;
    }
}

/*
int main(void)
{
    ft_print_alphabet();
    return(0);
}*/

/*
Dichiarazione e Inizializzazione di i:

    int i; dichiara una variabile i di tipo intero

    i = 'a'; assegna a i il valore ASCII del carattere 'a'. In C, i caratteri sono rappresentati internamente come numeri secondo la tabella ASCII

Perché si scrive 'a'?
    Scrivere a senza apici si riferisce a una variabile o funzione di nome a. Scrivere 'a' tra apici indica il carattere letterale 'a' secondo la tabella ASCII!!
    Si poteva scrivere usando carattere ASCII corrispondente ad 'a' --> int i = 97;

Ciclo while:

    Il ciclo while(i <= 'z') continua a iterare finché i è minore o uguale al valore ASCII del carattere 'z'

Scrittura del Carattere:

    write(1, &i, 1); utilizza la syscall write per scrivere un byte (il carattere corrente) al file descriptor 1, che rappresenta lo standard output
    &i è l'indirizzo del carattere corrente, e 1 indica che un singolo byte deve essere scritto

Incremento di i:

    i++; incrementa i al carattere successivo nella sequenza ASCII. Questo fa sì che i passi da 'a' a 'b', poi a 'c', e così via fino a 'z'.
*/