#include <stdio.h>
#include <stdlib.h>
void mostra_file(char nome_file[]) {
FILE *fp;
int c;
fp = fopen(nome_file, "r");
if (fp == NULL) {
printf("Impossibile aprire il file %s.\n", nome_file);
exit(1);
}
printf("\nContenuto del file %s\n", nome_file);
printf("==========================================================\n");
c = fgetc(fp);
while (c != EOF) {
putchar(c);
c = fgetc(fp);
}
fclose(fp);
}
int main( void ) {
mostra_file("in.txt");
mostra_file("in2.txt");
return 0;
}