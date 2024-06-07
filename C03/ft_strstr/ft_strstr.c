#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p1;
	char	*p2;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		p1 = str;
		p2 = to_find;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (str);
		str++;
	}
	return ((char *)0); // NULL
}

int main() {

    char str[] = "La vita è bella!";
    
    char to_find[] = "vita";

    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("La sottostringa è stata trovata: %p\n", result);
    } else {
        printf("La sottostringa non è stata trovata.\n");
    }

    return 0;
}