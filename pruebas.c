#include <stdio.h>
#include <ctype.h>
#include <string.h>

void    prueba(void)
{
    char    c;

    c = ' ';
    printf("isprint retorna %d para %d\n", isprint(c), c);
}

int main(void)
{
    printf("------------------------------------------------------------------------------------------\n");
    prueba();
    printf("------------------------------------------------------------------------------------------\n");
}