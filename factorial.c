#include <stdio.h>

int main() {
    int n;
    long long int resultat = 1;

    // Saisie de l'utilisateur
    scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            resultat *= i;
        }
        printf("Le factoriel de %d est : %lld\n", n, resultat);
    }

    return 0;
}
