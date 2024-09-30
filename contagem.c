#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int comprimento;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    comprimento = strlen(string) - 1;  

    printf("A string digitada possui %d caracteres (incluindo espacos).\n", comprimento);

    return 0;
}