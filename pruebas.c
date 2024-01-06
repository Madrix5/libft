#include <stdio.h>
#include <ctype.h>
#include <string.h>

void    prueba(void)
{
    char    c;

    c = 31;
    printf("isprint retorna %d para %c\n", isprint(c), c);
}

int main(void)
{
    printf("------------------------------------------------------------------------------------------\n");
    prueba();
    printf("------------------------------------------------------------------------------------------\n");
}