int    ft_has_char(char *str, char c)
{
    int    i = 0;

    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int    ft_inter(char *str1, char *str2, char *com)
{
    int    i = 0;
    int    j = 0;

    while (str[i])
    {
        if (ft_has_char(str2, str1[i]) == 1)
        {
            if (ft_has_char(com, str1[i]) == 0)
            {
                write (1, &str1[i], 1);
                comp[j] = str[i];
                j++;
            }
        }
        i++;
}

int    main (int ac, char **av)
{
    char    str[1024];

    if (ac == 3)
    {
        ft_inter(av[1], av[2], str);
    }
    write (1, "\n", 1);
    return (0);