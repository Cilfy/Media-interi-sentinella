#include <stdio.h>

int main( void )
{
    printf("%s", "Inserisci un intero (9999 per uscire) :");
    int value; // valore corrente
    scanf("%d", &value);
    unsigned int count = 0; // numero di valori
    int total = 0; // somma di interi
    
    while (value != 9999) {
        total += value; // aggiorna il totale
        ++count;
        printf("%s", "Inserisci un intero (9999 per uscire): ");
        scanf("%d", &value);
    }
    // mostra la media se inseriti piu' di 0 valori
    if (count != 0) {
        printf("\nLa media è");
        printf("%.2f\n", (double) total / count );
    }
    else {
        puts("\nNessun intero inserito.");
    }

    return 0;
}
