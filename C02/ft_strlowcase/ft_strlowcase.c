char *ft_strlowcase(char *str) 
{
    char *ptr = str; // Dichiarazione e inizializzazione di un puntatore al primo carattere della stringa
    
    while (*ptr != '\0') 
    { 
        if (*ptr >= 'A' && *ptr <= 'Z') 
        {
            *ptr += 32; // Converte il carattere in minuscolo aggiungendo la differenza tra 'A' e 'a'
        }
        ptr++;
    }
    return str; 
}

/*
#include <stdio.h>

int main() {
    char str[] = "Hello, WORLD!";
    printf("Stringa originale: %s\n", str);
    printf("Stringa in minuscolo: %s\n", ft_strlowcase(str));
    return 0;
}
*/