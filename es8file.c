#include <stdio.h>
#define NOME_FILE "ciao.txt"
int main(void)
{
    FILE*file_scrivi;
    char c;
    file_scrivi = fopen(NOME_FILE, "w");
    if(file_scrivi == NULL)
    {
    printf("errore nell'apertura del file");
    return 0;
    }
    printf("premere k per terminare il file\n");
    scanf("%c", &c);
    while ( c!= 'k')
    {
        fprintf(file_scrivi, "%c",c);
        scanf("%c", &c);

    }

    
    }