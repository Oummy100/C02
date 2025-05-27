#include <stdio.h>

int main() {
    int nombre;

    // Demande de saisir un entier
    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    // Vérification de la parité
    if (nombre % 2 == 0) {
        printf("%d est pair.\n", nombre);
    } else {
        printf("%d est impair.\n", nombre);
    }

    return 0;
}
