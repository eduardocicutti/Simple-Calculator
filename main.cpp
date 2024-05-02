#include <cstdio>
#include <iostream>

int main() {
    char operacao;
    double num1, num2, resultado;
 
    printf("``````````````````````````````````````````````````````````````````\n");
    printf("                Calculadora Simples  C++ \n");
    printf("``````````````````````````````````````````````````````````````````\n");

    printf("Digite um numero e pressione <ENTER>: ");
    scanf("%lf", &num1);

    printf("Digite um numero e pressione <ENTER>: ");
    scanf("%lf", &num2);

    printf("Digite a operacao (+, -, *, /) e pressione <ENTER>: ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        resultado = num1 + num2;
    } else if (operacao == '-') {
        resultado = num1 - num2;
    } else if (operacao == '*') {
        resultado = num1 * num2;
    } else if (operacao == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
        } else {
            printf("<<ERRO: Divisao por zero nao permitida>>\n");
            return 1;
        }
    } else {
        printf("<<ERROR: Operacao invalida>>\n");
        return 1;
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
