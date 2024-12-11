// Data una sequenza di interi, verificare se ogni tripla di interi consecutivi ha due interi la cui somma è pari a 10

#include <stdio.h>

int somma10(int numeri[], int l){
    int i = 0;
    int triple = 1;

    while (i < l && triple) {
        if (( numeri[i]   + numeri [i+1] == 10 ) ||
            ( numeri[i]   + numeri [i+2] == 10 ) ||
            ( numeri[i+1] + numeri [i+2] == 10))
            i++;
        else
            triple = 0;
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
    if (somma10(numeri, lung))
        printf("Tutte le triple hanno due interi la cui somma è pari a 10\n");
    else 
        printf("Non tutte le triple hanno due interi la cui somma è pari a 10\n");

    return 0;
}