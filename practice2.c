#include <stdio.h>

int main(){
    int n , i ;
    int somme = 0;

    printf("entrez le nombre des element de tableau");
    scanf("%d" ,&n);

    int T[n];
    for ( i = 0; i < n + 1; i++)
    {
        printf("element %d :",T[i]);
        scanf("%d" ,&T[i]);
        somme += T[i];

    }
    
    printf("votre some est: %d" , somme);
    
    return 0;
}