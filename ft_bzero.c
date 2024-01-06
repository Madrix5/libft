void    ft_bzero(char *str, int n)
{
    int i;

    i = 0;
    while (i <= n)
    {
        str[i] = '0';
        i++;
    }
}