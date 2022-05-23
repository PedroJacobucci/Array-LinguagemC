#include <stdio.h>
#include <locale.h>
int main() {

    setlocale(LC_ALL, "Portuguese");
    int a[10], b[10], c[10], i, j, k = 0, x, contador;

    printf("Digite 10 numeros inteiros maiores que zero: \n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    
    printf("Digite mais 10 numeros: \n");
    for(i = 0; i < 10; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++)
        {
            if(a[i] == b[j])
            {
                contador = 0;
                for(x = 0; x < k; x++)
                {
                    if(a[i] == c[x])
                        contador++;
                }
                if(contador == 0)
                {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    }

    printf("\nNumeros em comum: \n");
    for(i = 0; i < k; i++)
        printf("%d \n", c[i]);

    getch();

    return 0;
}
