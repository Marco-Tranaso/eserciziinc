#define DIM 4
#include <stdio.h>
#include <stdlib.h>

typedef struct {
                        char cognome[11];
                        char nome[11];
                        char cell[10];
                        } persona;
void main()
{
    persona v[DIM];
    int k=0;
    FILE *f, *f2;

    if ((f=fopen("rubrica.txt", "r"))==NULL)
        {
            exit(1);
        }
    if ((f2=fopen("Rubrica_rev1.txt", "w"))==NULL)
        {
            exit(1);
        }
    while (!feof(f))
        {
          fscanf(f,  "%s\t%s\t%s\n", v[k].cognome, v[k].nome, v[k].cell );
          fprintf(f2,"%s\t%s\t%s\n", v[k].cognome, v[k].nome, v[k].cell );
           k++;
        }
}