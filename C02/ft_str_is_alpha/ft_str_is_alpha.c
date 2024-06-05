int ft_str_is_alpha(char *str) 
{
    if (*str == '\0') 
    {
        return 1; 
    }

    while (*str) {
        if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))) 
        {
            return 0; // Se trova un carattere non alfabetico
        }
        str++;
    }
    return 1; 
}

/* oppure ...
int ft_str_is_alpha(char *str) {
    int i = 0;

    // Se la stringa è vuota
    if (str[i] == '\0') {
        return 1;
    }

    // Ciclo while usando l'indice
    while (str[i] != '\0') {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) {
            return 0; 
        }
        i++;
    }
    return 1; 
}*/