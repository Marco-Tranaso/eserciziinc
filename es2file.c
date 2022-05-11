#include <stdio.h>
void leggi(char nome_file[])
{
FILE*fp;
int c;
fp=fopen(nome_file, "r");
if (fp==NULL)
{
    printf("impossibile aprire il file");
    exit(1);
}
printf("contenuto del file %s", nome_file);
printf("=============================================================================");
c=fgetc(fp);
while (c!=EOF){
    putchar(c);
    c=fgetc(fp);
    
    }
    fclose(fp);
}
int main(void)
{

}
