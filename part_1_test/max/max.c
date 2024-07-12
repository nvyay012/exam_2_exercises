int		max(int* tab, unsigned int len)
{
    int     i = 0;
    int     max = 0;

    if (len > 0)
        max = tab[0];
    while (len > i)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}