// Data una sequenza di interi, verificare se esistono tre elementi adiacenti nella sequenza tali che il valore dell'elemento intermedio e la differenza tra il precedente e il successivo, oppure 
// tra il successivo e il precedente
// Tipo: verifica esistenziale (ALMENO UNA)

/* Spec:    input: una sequenza di interi x1 -- xn
            precondizioni: n > 3
            output: un valore booleano
            postcondizioni: tripla è true se esiste una tripla in cui il centrale è la differenza tra gli adiacenti, tripla è false altrimenti 
*/

int differenzaAdiacenti(int numeri[], int l) {
    int i = 0;  // Contatore
    int tripla = 0;  // Variabile di output

    // Verifica esistenziale
    while (i < l - 2 && !tripla){
        if (numeri[i+1] == (numeri[i] - numeri[i+2]) || numeri[i+1] == (numeri[i+2] - numeri[i]))
            tripla = 1;
        else
            i++;
    }

    // Output
    return tripla;
}

#include <stdio.h>

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
    if (differenzaAdiacenti(numeri, lung))
        printf("Esistono tre interi adiacenti il cui centrale è la differenza tra gli adiacenti\n");
    else 
        printf("Non esistono tre interi adiacenti il cui centrale è la differenza tra gli adiacenti\n");

    return 0;
}