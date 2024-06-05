//#include <stdio.h>

int ft_str_is_numeric(char *str) 
{
    if (*str == '\0') 
    {
        return 1;
    }

    while (*str != '\0') 
    {
        if (*str < '0' || *str > '9') 
        {
            return 0;
        }
        str++;
    }
    return 1;
}

/*
int main() {
    printf("%d\n", ft_str_is_numeric("12345"));  // Stampa 1
    printf("%d\n", ft_str_is_numeric("abc123")); // Stampa 0
    printf("%d\n", ft_str_is_numeric(""));       // Stampa 1

    return 0;
}
*/
