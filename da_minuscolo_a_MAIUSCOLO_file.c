#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define l 10
int main(){
    FILE *f1, *f2;
    char vet[l];

    if((f1=fopen("./nomi.txt", "r"))==NULL) {
        printf("Errore nell'apertura del file'");
        exit(1);}
    if((f2=fopen("./NOMI2.TXT", "w"))==NULL) {
        printf("Errore nell'apertura del file'");
        exit(1);}

    while(!feof(f1)){//not
        fscanf(f1,"%s\n", &vet);
        int lung = strlen(vet);
        for (int i = 0;i<lung;i++)
        {
            fprintf(f2,"%c", toupper(vet[i])) ;
        }
        fprintf(f2,"\n");

    }

    fclose(f1);
    fclose(f2);

return 0;
}