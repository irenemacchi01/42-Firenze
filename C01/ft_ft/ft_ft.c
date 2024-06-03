void ft_ft(int *nbr) 
{
    *nbr = 42;
}

/*
La dichiarazione void ft_ft(int *nbr) indica che ft_ft è una funzione che non restituisce nulla (void) e prende un puntatore a un intero come parametro (int *nbr).

All'interno della funzione, *nbr è usato per accedere al valore dell'intero puntato dal puntatore nbr.

L'istruzione *nbr = 42; imposta il valore dell'intero puntato da nbr a 42. Utilizzando l'operatore di dereferenziazione *, accediamo al valore dell'intero puntato dal puntatore nbr e lo impostiamo a 42.

Pertanto, quando chiami ft_ft con un puntatore a un intero come argomento, il valore dell'intero puntato da quel puntatore verrà modificato per diventare 42. Ad esempio, se passi un puntatore a un intero ptr, il valore dell'intero a cui punta ptr verrà impostato a 42.
*/