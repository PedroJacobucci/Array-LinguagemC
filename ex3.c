#include <stdio.h>
#include <locale.h>
int main() {

    setlocale(LC_ALL, "Portuguese");
    int numero[10], i, soma = 0;
    double media;

    printf("\nDigite 10 numeros inteiros maiores que 0: \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &numero[i]);
        if(numero[i] <= 0){
            printf("\nNumero tem que ser maior que zero: \n");
            break;
        }
    }

    printf("\nMedia aritmetica de todos os numeros impares: ");
    for(i =0; i < 10; i++) {
        soma = soma + numero[i];
    }
    
    media = soma / i;
    printf("%.2f", media);
}