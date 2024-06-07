#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

/* oppure ...
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (+1);
		i++;
	}
	return (0);
}
*/

int	main(void) 
{
	char	str1[] = "hello";
	char	str2[] = "hello";
	char	str3[] = "no";
	
	printf("ft_strcmp(str1, str2) : %d\n", ft_strcmp(str1, str2));
	printf("ft_strcmp(str1, str3) : %d\n", ft_strcmp(str1, str3));
	return (0);
}
