#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    FILE *Testo;

    if ((Testo=fopen("nomi.txt", "w"))==NULL)
        {
            exit(1);
        }

    printf ("\n\nInserire il testo desiderato:");
    char testo[1000000];
    scanf("%s", &Testo);
    
    fprintf (Testo, "%s", testo);

    fclose (Testo);
    return 0;   
}