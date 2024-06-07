#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	i = 0;
	
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char str1[] = "hello";
	char	str2[]= "helium";
	
	int	result = ft_strncmp(str1, str2, 3);
	printf("%d\n", result);
	
	result = ft_strncmp(str1, str2, 4);
	printf("%d", result);
	
	return(0);
}