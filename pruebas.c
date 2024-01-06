#include <stdio.h>
#include <ctype.h>

void    prueba(void)
{
    char    c;

    c = 0;
    printf("isascii retorna %d cuando es menor o igual que %c\n", isascii(c), c);
}

int main(void)
{
    printf("------------------------------------------------------------------------------------------\n");
    prueba();
    printf("------------------------------------------------------------------------------------------\n");
}