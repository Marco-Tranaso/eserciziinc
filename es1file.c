#include<stdio.h>
#include<stdlib.h>

#define n_controllo 4

                            
void controllo()
{
    if (fopen ("./numeri.txt", "rt") == NULL)
    {
        printf ("\n\nFile non trovato.");
        exit(1);
    }
}

void cancella()      
{
    remove("./MAX.txt");
    remove("./MIN.txt");
}

int main()
{
    cancella();

    FILE *numeri, *MAX, *MIN;

    controllo();
    
    numeri = fopen ("./numeri.txt", "rt");
    MAX = fopen ("./MAX.txt", "at");
    MIN = fopen ("./MIN.txt", "at");
    
    int numero;

    while (! feof(numeri))     
    {
        fscanf (numeri, "%d\n", &numero);
        if (numero < n_controllo)         
            fprintf (MIN, "%d\n", numero);
        else
            fprintf (MAX, "%d\n", numero);
    }
    
    fclose(MAX);         
    fclose(MIN);
    fclose(numeri);
    return 0;
}