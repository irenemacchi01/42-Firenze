char *ft_strupcase(char *str) 
{
    char *ptr = str; // Dichiarazione e inizializzazione di un puntatore al primo carattere della stringa
    
    while (*ptr != '\0') 
    { 
        if (*ptr >= 'a' && *ptr <= 'z') 
        {
            *ptr -= 32; // Converte il carattere in maiuscolo sottraendo la differenza tra 'a' e 'A'
        }
        ptr++;
    }
    return str; 
}