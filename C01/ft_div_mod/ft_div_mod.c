//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod) 
{
    *div = a / b;
    *mod = a % b;
}

/*int main() {
    int dividend = 15;
    int divisor = 4;
    int division_result, modulo_result;

    ft_div_mod(dividend, divisor, &division_result, &modulo_result);

    printf("Il risultato della divisione di %d per %d è %d\n", dividend, divisor, division_result);
    printf("Il resto della divisione di %d per %d è %d\n", dividend, divisor, modulo_result);

    return 0;
}
*/
