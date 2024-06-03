#include <unistd.h> // Necessario per dichiarare la funzione write. Questa libreria contiene le definizioni delle syscall POSIX (Portable Operating System Interface), che includono funzioni per la gestione di file, processi e altro

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
La funzione prende un singolo carattere c come argomento

write: è una syscall utilizzata per scrivere dati in un file descriptor

    1: è il file descriptor per lo standard output (stdout)

    &c: è l'indirizzo del carattere da scrivere

    1: è il numero di byte da scrivere, in questo caso 1 byte (un singolo carattere)

Utilizzo di write invece di printf o putchar?

write è una funzione di basso livello che interagisce direttamente con il sistema operativo, fornendo un controllo preciso su ciò che viene scritto e dove

printf e putchar sono funzioni di più alto livello che possono introdurre overhead aggiuntivo e formattazione che potrebbe non essere necessaria per un'operazione semplice come scrivere un singolo carattere

Questo approccio è comune in ambienti dove si desidera il massimo controllo sulle operazioni di input/output, come nei progetti didattici o in contesti dove le performance sono critiche.
*/