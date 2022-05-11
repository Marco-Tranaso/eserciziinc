#include <stdio.h>
#include <stdlib.h>
int fattoriale(int n);

int main(){
    FILE *fp, *fpari, *fdispari, *ffatt;
    int  val, numero;

    if((fp=fopen("./numeri.txt", "r"))==NULL) {
        printf("Errore nell'apertura del file'");
        exit(1);}
    if((fpari=fopen("./pari.txt", "w"))==NULL) {
        printf("Errore nell'apertura del file'");
        exit(1);}
    if((fdispari=fopen("./dispari.txt", "w"))==NULL) {
        printf("Errore nell'apertura del file'");
        exit(1);}
    if((ffatt=fopen("./fattoriale.txt", "w"))==NULL) {
        printf("Errore nell'apertura del file'");
        exit(1);}


    while(!feof(fp)){//not
        fscanf(fp,"%d\n", &numero); //legge i numeri dal file
        int fat = fattoriale(numero);
        fprintf(ffatt,"%d\n", fat);
          if (numero%2==0)
            { fprintf(fpari,"%d\n", numero); }//se pari li inserisce in un file di nome pari.txt
          else
             {fprintf(fdispari,"%d\n", numero); }//se dispari li inserisce in un file di nome dispari.txt
    }

    fclose(fp);
    fclose(fpari);
    fclose(fdispari);
    fclose(ffatt);
return 0;
}

int fattoriale(int n)
{
    int fattor = 1;
    for(int i=n; i>1;i--)
        {fattor = fattor*i;}

    return(fattor);
}