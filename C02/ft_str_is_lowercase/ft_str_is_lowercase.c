//#include <stdio.h>

int ft_str_is_lowercase(char *str) 
{
    if (*str == '\0') 
    {
        return 1;
    }

    while (*str != '\0') 
    {
        if (!(*str >= 'a' || *str <= 'z')) 
        {
            return 0;
        }
        str++;
    }
    return 1;
}

/*
int main() {
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "hello123";
    char str4[] = "";

    printf("ft_str_is_lowercase(\"%s\") = %d\n", str1, ft_str_is_lowercase(str1));
    printf("ft_str_is_lowercase(\"%s\") = %d\n", str2, ft_str_is_lowercase(str2));
    printf("ft_str_is_lowercase(\"%s\") = %d\n", str3, ft_str_is_lowercase(str3));
    printf("ft_str_is_lowercase(\"%s\") = %d\n", str4, ft_str_is_lowercase(str4));

    return 0;
}
*/

/* se avessi voluto usare write al posto di printf?

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int n) {
    if (n < 0) {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}

void ft_putstr(char *str) {
    while (*str != '\0') {
        ft_putchar(*str);
        str++;
    }
}

int main() {
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "hello123";
    char str4[] = "";

    ft_putstr("ft_str_is_lowercase(\"");
    ft_putstr(str1);
    ft_putstr("\") = ");
    ft_putnbr(ft_str_is_lowercase(str1));
    ft_putchar('\n');

    ft_putstr("ft_str_is_lowercase(\"");
    ft_putstr(str2);
    ft_putstr("\") = ");
    ft_putnbr(ft_str_is_lowercase(str2));
    ft_putchar('\n');

    ft_putstr("ft_str_is_lowercase(\"");
    ft_putstr(str3);
    ft_putstr("\") = ");
    ft_putnbr(ft_str_is_lowercase(str3));
    ft_putchar('\n');

    ft_putstr("ft_str_is_lowercase(\"");
    ft_putstr(str4);
    ft_putstr("\") = ");
    ft_putnbr(ft_str_is_lowercase(str4));
    ft_putchar('\n');

    return 0;
}
*/