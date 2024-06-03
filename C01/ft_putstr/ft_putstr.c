#include <unistd.h>

void ft_putstr(char *str) 
{
    int l;
    l = 0;

    while(str[l] != '\0')
    {
        l++;
    }
    write(1, str, l);
}

/*
int main(void){
    char *text = "ciao";

    ft_putstr(text);
    return(0);
}
*/