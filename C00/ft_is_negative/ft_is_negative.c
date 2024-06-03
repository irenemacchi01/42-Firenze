#include <unistd.h>

void ft_is_positive(int n)
{
    if (n < 0)
    {
        write(1, "N", 1);
    }
    else
    {
        write(1, "P", 1);
    }
}

/*int main() {
    ft_is_positive(-5); 
    ft_is_positive(0);  
    ft_is_positive(10); 
    return 0;
}*/
