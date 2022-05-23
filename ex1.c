#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese");
    int n1[10] = {}, n2[10] = {}, n3[10] = {}, i;

    printf("Digite 10 numeros inteiros maiores que zero: \n");

    for(i = 0; i < 10; i++){
    scanf("%d", &n1[i]);
    if(n1[i] % 2 == 0) {
        n2[i] = n1[i];
    }else{
        n3[i] = n1[i];
    }
}

    printf("Numeros digitados: ");

    for(i=0; i<10; i++) {
        printf("\n%d", n1[i]);
    }

    printf("\nNumeros pares: ");
    for(i= 0;i < 10; i++){
        if(n2[i] != 0)
            printf("\n%d", n2[i]);
    }

    printf("\nNumeros impares: ");
    for(i=0; i < 10; i++){
        if(n3[i] != 0)
            printf("\n%d", n3[i]);
    }
    
    return 0;
}