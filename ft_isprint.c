int ft_isprint(char c)
{
    if (c == 32)
        return (64);
    else if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126))
        return (16);
    else if (c >= 48 && c <= 57)
        return (4);
    else if (c >= 65 && c <= 90)
        return (1);
    else if (c >= 97 && c <= 122)
        return (2);
    else
        return (0);
}