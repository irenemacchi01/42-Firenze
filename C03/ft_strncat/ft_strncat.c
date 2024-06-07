#include <stdio.h>

char	ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *dest_end = dest;

    // Trova la fine della stringa 'dest'
    while (*dest_end)
    {
        dest_end++;
    }
    while (*src && nb > 0)
    {
        *dest_end++ = *src++;
        nb--;
    }
    *dest_end = '\0';
	
    // Ritorna il puntatore all'inizio della stringa 'dest'
    return dest;
}

int	main(void)
{
	char str1[50] = "hello";
	char str2[] = " world!";
	
	ft_strncat(str1, str2, 3);
	printf("%s", str1);
	return(0);
}
