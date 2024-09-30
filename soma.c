#include <stdio.h>

int main() {
    int numeros[5];
    int soma = 0, i;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma total dos numeros e: %d\n", soma);

    return 0;
}
