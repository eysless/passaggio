// Verificare se esistono tre elementi non necessariamente adiacenti nella sequenza tali che due dei tre elementi sono divisibili per il terzo

#include <stdio.h>

int dueNonConsecutiviDivisibiliPerTerzo(int numeri[], int l){
    int i = 0;  // Contatore primo elemento
    int j,k;    // Contatore secondo e terzo elemento;
    int esiste = 0; // Variabile di output
    while (i < l-2 && !esiste){
        j = i + 1;
        while (j < l-1 && !esiste){
            k = j + 1;
            while (k < l && !esiste){
                if ((numeri[i] % numeri[k] == 0 && numeri[j] % numeri[k] == 0) ||
                    (numeri[i] % numeri[j] == 0 && numeri[k] % numeri[j] == 0) ||
                    (numeri[j] % numeri[i] == 0 && numeri[k] % numeri[i] == 0))
                    esiste = 1;
                else 
                    k++;
            }
            j++;
        }
        i++;
    }

    return esiste;
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
    if (dueNonConsecutiviDivisibiliPerTerzo(numeri, lung))
        printf("Esistono tre interi adiacenti tali che uno dei tre elementi è divisore degli altri due\n");
    else 
        printf("Non esistono tre interi adiacenti tali che uno dei tre elementi è divisore degli altri due\n");

    return 0;
}
/*  primo e secondo per terzo
    primo e terzo per secondo
    secondo e terzo per primo*/