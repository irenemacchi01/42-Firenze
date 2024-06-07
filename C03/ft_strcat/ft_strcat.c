#include <stdio.h>

char	ft_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (*dest);
}

/*ALTERNATIVA
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}*/


int	main(void)
{
	char str1[50] = "hello";
	char str2[] = " world!";
	
	ft_strcat(str1, str2);
	printf("%s", str1);
	return(0);
}
