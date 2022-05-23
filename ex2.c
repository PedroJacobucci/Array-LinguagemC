#include <stdio.h>
#include <locale.h>
int main() {

    setlocale(LC_ALL, "Portuguese");
    int n1[10], n2[10], i, soma = 0;

    printf("Digite 10 valores inteiros maiores que 0: \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &n1[i]);
        if(n1[i] % 2 == 0){
            n2[i] = n1[i];
            soma = n2[i] + soma;
        }
    }
    printf("\nSoma de todos os numeros pares: %d", soma);
}