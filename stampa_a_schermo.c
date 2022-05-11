#include <stdio.h>
#include <stdlib.h>
#define l 50

void main ()
{
    FILE *fleg;
  int n[l];

    if (( fleg = fopen("./leggi.txt", "r")) == NULL)
    {
        printf("file non apribile");
        exit(1);
    }


    for (int i = 1; i < l; i++ )
    {
        while (!feof(fleg))
        {
            fscanf(fleg, "%c", &n[l]);
            printf("%c", n[l]);
        }
    }
    fclose (fleg);
}
