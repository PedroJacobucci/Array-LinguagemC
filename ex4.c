#include <stdio.h>
#include <locale.h>
int main () {

    setlocale(LC_ALL, "Portuguese");
    int numero[10], menor, maior, i;
    double media;

    printf("\nDigite 10 numeros inteiros maiores que zero: \n");
    for(i = 0; i < 10; i++)
        scanf("%d", &numero[i]);
    
    i=0;
    menor = numero[i];
    while(i < 10) {
        if(menor > numero[i]) {
            menor = numero[i];
        }
        i++;
    }
    printf("\nMenor numero = %d", menor);
    for(i =1; i < 10; ++i) {
        if(numero[0] < numero[i]){
            numero[0] = numero[i];
        }
    }
    printf("\nMaior numero: %d\n", numero[0]);

    media = (double)(numero[0] + menor) / 2.0;
    printf("Media entre o maior numero e o menor: %.2f", media);
    
    return 0;
}