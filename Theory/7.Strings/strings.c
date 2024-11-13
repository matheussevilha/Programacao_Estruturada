#include <stdio.h>

int main() {
    // Atribuição direta
    char password[] = "abcd efgh";
    printf("%s\n", password);

    char teclas_escape[] = "abcd\tef\ngh";
    printf("%s\n", teclas_escape);

    // Atribuindo pelo scanf
    char name[15]; // 14 caracteres + null
    printf("Digite seu primeiro nome: ");
    scanf(" %s", name);
    printf("%s\n", name);

    // Consumir o '\n' deixado pelo scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // Fgets
    char input[65];
    printf("Digite a frase: ");
    fgets(input, 65, stdin);
    printf("%s", input);

    return 0;
}
