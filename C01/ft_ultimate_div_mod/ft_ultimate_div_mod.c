//#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b) {
    int temp_a = *a; // Salva il valore originale di a
    *a = temp_a / *b; // Salva il risultato della divisione in a
    *b = temp_a % *b; // Salva il resto della divisione in b
}

/*
int main() {
    int dividend = 15;
    int divisor = 4;

    printf("Prima della chiamata alla funzione ft_ultimate_div_mod, dividend = %d, divisor = %d\n", dividend, divisor);

    ft_ultimate_div_mod(&dividend, &divisor);

    printf("Dopo la chiamata alla funzione ft_ultimate_div_mod, dividend = %d, divisor = %d\n", dividend, divisor);

    return 0;
}
*/