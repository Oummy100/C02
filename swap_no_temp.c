#include <stdio.h>

int main() {
    int a, b;

    // Entrée utilisateur
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    // Affichage avant échange
    printf("Avant échange: a = %d, b = %d\n", a, b);

    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    // Résultat
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}
