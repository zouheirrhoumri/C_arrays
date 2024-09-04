#include <stdio.h>

int main()
{
    // max
    int i, n, max;
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);
    int T[n];

    printf("Entrez les %d elements du tableau:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i + 1);
        scanf("%d", &T[i]);
    }

    max = T[0];
    for (i = 0; i < n; i++)
    {
        if (T[i] > max)
        {
            T[i] = max;
        }
    }
    printf("Le plus grand element du tableau est: %d\n", max);

    // min

    int i, n, min;
    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);
    int T[n];

     printf("Entrez les %d elements du tableau:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i + 1);
        scanf("%d", &T[i]);
    }
    min = T[0];
    for (i = 0; i < n; i++)
    {
        if (T[i] < min)
        {
            T[i] = min;
        }
    }

    printf("Le plus petit element du tableau est: %d\n", min);

    return 0;


}