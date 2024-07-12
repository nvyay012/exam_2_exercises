#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *str)
{
    int i = 0;
    char *p = malloc(sizeof(char) * (ft_strlen(str) + 1));

    if (!p)
        return (NULL);
    while (str[i])
    {
        p[i] = str[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}