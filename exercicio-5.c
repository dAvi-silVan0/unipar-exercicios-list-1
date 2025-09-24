//fazer esse trem sem ia e de lascar
#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4, media;

    printf("Digite a nota do 1 bimestre (0 a 10): ");//pra que tanto erro so porcausa de um acento
    scanf("%f", &n1);

    printf("Digite a nota do 2 bimestre (0 a 10): ");
    scanf("%f", &n2);

    printf("Digite a nota do 3 bimestre (0 a 10): ");
    scanf("%f", &n3);

    printf("Digite a nota do 4 bimestre (0 a 10): ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4.0f;

    printf("Media aritmetica: %.2f\n", media);//erro nas aspas duplas e a minha bola esquerda



    return 0;
}





