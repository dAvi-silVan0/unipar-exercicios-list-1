#include <stdio.h>

int main() {
    float capacidade_tanque;
    const float preco_litro = 5.89f;
    float valor_total;

    printf("\nO preco da gasolina eh R$ %.2f por litro.\n", preco_litro);

    printf("Informe a capacidade do seu tanque (em litros): ");

    //o usuario e tao inteligente que ele coloca -550 litros kkkkkkk
    //"se o usuario nao for burro, o programador trabalha menos" ~~roni, professor~~

    scanf("%f", &capacidade_tanque);

    valor_total = preco_litro * capacidade_tanque;

    printf("Para encher %.2f L, o valor sera R$ %.2f\n",
           capacidade_tanque,
           valor_total);


           
    return 0;
}

//copilot, as grandes empresas usam voce?
//falou nada bixo
//copilot, me mostre alguma coisa interessante:
//"copilot, amoleça o meu coração"?????????

//os cara que usam o copilot tão de resaca
//fica 6 dias sem a morena e pede pro copilot amolecer o coração
//daora, agora toda ora que eu escrevo, ele coloca "amoleça o meu coração"


