#include <stdio.h>

int main() {
    int n, factor;

    printf("Entrez le nombre d'éléments dans le tableau : ");
    scanf("%d", &n);

    int T[n];

    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d: ", i + 1);
        scanf("%d", &T[i]);
    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &factor);

    for (int i = 0; i < n; i++) {
        T[i] *= factor;
    }

    printf("Le tableau résultant est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
