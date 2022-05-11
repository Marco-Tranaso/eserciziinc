#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>

int main()
{
    FILE*conta_numeri,*Cifredecimali;
    int nc=0;
    char c;
    if((conta_numeri=fopen("./conta_numeri.txt","r"))==NULL)
    {
        printf("Errore nell'apertura del file");
        return 0;
    }
    if((Cifredecimali=fopen("./Cifredecimali.txt","w"))==NULL)
    {
        return 0;
    }
    while(!feof(conta_numeri))
    {
        fscanf(conta_numeri,"%c",&c);
        if(c>='0' && c<='9')
        {
            nc++;
            fprintf(Cifredecimali,"%c",c);
        }
    }
    printf("Numero di caratteri numerici: %d",nc);
    fclose(conta_numeri);
    fclose(Cifredecimali);
    return 0;
}

