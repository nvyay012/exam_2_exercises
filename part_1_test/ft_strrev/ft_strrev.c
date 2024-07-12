#include <stdio.h>

char *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char c;

    while (str[len])
        len++;
    len--;

    while (i < len)
    {
        c = str[i];
        str[i] = str[len];
        str[len] = c;
        i++;
        len--;
    }
    return (str);
}

int main(void)
{
    char s[] = "hamza barda"; // Use a character array instead of a string literal
    printf("%s\n", ft_strrev(s));
    return (0);
}
