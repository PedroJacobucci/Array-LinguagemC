#include <stdio.h>
#include <locale.h>
int main() {

    setlocale(LC_ALL, "Portuguese");
    int lista1[10], lista2[10], diferente[20];
    int i, j, diff = 0;

    printf("Digite 10 numeros inteiros maiores que zero: \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &lista1[i]);

        if(lista1[i] <= 0){
            printf("\nNumeros maiores que zero: \n");
            scanf("%d", &lista1[i]);
        }
    }
    printf("Digite mais 10 numeros: \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &lista2[i]);

        if(lista2[i] <= 0){
            printf("\nDigite somente numeros maiores que zero: \n");
            scanf("%d", &lista2[i]);
        }
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(lista1[i] == lista2[j]){
                break;
            }
            if(j == 9){
                diferente[diff] = lista1[i];
                diff++;
            }
        }
    }
    for(i = 0; i < 10; i++){
        for(j =0; j < 10; j++){
            if(lista2[i] == lista1[j]){
                break;
            }
            if(j = 9){
                diferente[diff] = lista2[i];
                diff++;
            }
        }
    }
    printf("\nNumeros que nao se repetem: \n");
    for(i = 0; i < diff; i++){
        printf("\n%d", diferente[i]);
    }

    return 0;
}
