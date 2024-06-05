char *ft_strcpy(char *dest, const char *src) 
{
    int i = 0;

    // Copiare carattere per carattere da src a dest fino a quando non si raggiunge '\0'
    while (src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Aggiungere il terminatore di stringa a dest

    return dest; // Restituire l'indirizzo di partenza di dest
}

/* oppure ...

char *ft_strcpy(char *dest, const char *src) {

    char original_dest = dest;

    // Copiare carattere per carattere da src a dest fino a quando non si raggiunge '\0'
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Aggiungere il terminatore di stringa a dest

    return original_dest; // Restituire l'indirizzo di partenza di dest
}
*/