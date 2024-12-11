// Verificare se esiste una tripla di interi consecutivi tali che uno dei tre elementi è divisore degli altri due

#include <stdio.h>

int dueDivisibiliPerTerzo(int numeri[], int l){
    int i = 0;
    int triple = 0;

    while (i < l && !triple){
        if ((numeri[i] % numeri[i+2] == 0 && numeri[i+1] % numeri[i+2] == 0) ||
            (numeri[i] % numeri[i+1] == 0 && numeri[i+2] % numeri[i+1] == 0) ||
            (numeri[i+1] % numeri[i] == 0 && numeri[i+2] % numeri[i] == 0))
            triple = 1;
        else    
            i++;
    }
    return triple;
}

int main() {
    int lung;   // La lunghezza dell'array
    
    // Input
    printf("Quanti numeri vuoi controllare?\n");
    scanf("%d", &lung);
    int numeri[lung];   // Dichiarazione array
    for (int i = 0; i < lung; i++){
        printf("Dammi il numero nella posizione %d: ", i+1);
        scanf("%d",&numeri[i]);
    }

    // Output
    if (dueDivisibiliPerTerzo(numeri, lung))
        printf("Esistono tre interi adiacenti tali che uno dei tre elementi è divisore degli altri due\n");
    else 
        printf("Non esistono tre interi adiacenti tali che uno dei tre elementi è divisore degli altri due\n");

    return 0;
}