#include <stddef.h>

char    *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == (char)c)
            return ((char *)str);
        str++;
    }
    return (NULL);
}

char    *ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        if (ft_strchr(s2, *s1) != 0)
            return ((char *)s1);
        s1++;
    }
    return (NULL);
}