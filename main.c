/******************************************************************************

Faça um programa em C que: – Receba um float digitado pelo usuário e armazena em 
A – Receba um inteiro digitado pelo usuário e armazene em 
B – Imprima as seguintes mensagens na tela (substitua o X e o Y pelo resultado da operação indicada na mensagem): 
• “A multiplicado por B é X...” 
• “A dividido por B é X, mas com duas casas decimais é Y!” 
• “A mais B é X e A menos B é Y” • “A elevado a B é X”



*******************************************************************************/
#include <math.h>
#include <stdio.h>

int main(){
    float a;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    int b;
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    float div = a / b;
    
    printf("%f multiplicado por %d é %f...\n", a, b, (a * b));
    printf("%f dividido por %d é %f, mas com duas casas decimais é %.2f!\n", a, b, div, div);
    printf("%f mais %d é %f e %f menos %d é %f\n", a, b, (a+b), a, b, (a-b));
    printf("%f elevado a %d é %f\n", a, b, pow(a, b));

    return 0;
}
