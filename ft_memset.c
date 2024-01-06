char    *ft_memset(char *point, char c, int n)
{
    int count;

    count = 0;
    while (count <= n)
    {
        point[count] = c;
        count++;
    }
    return (point);
}