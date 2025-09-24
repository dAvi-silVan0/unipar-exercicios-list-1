//so mais essa hoje;-;
#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("Informe o dia (entre 1 e 31): ");
    scanf("%d", &dia);

    printf("Informe o mes (entre 1 e 12): ");
    scanf("%d", &mes);

    printf("Informe o ano (ex: 2025): ");
    scanf("%d", &ano);

    printf("Data formatada: %02d/%02d/%04d\n", dia, mes, ano);



    return 0;
}




