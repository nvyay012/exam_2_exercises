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

size_t  ft_strcspn(const char *str, const char *reject)
{
    size_t  ret = 0;

    while (*str)
    {
        if (ft_strchr(reject, *str))
            return (ret);
        str++;
        ret++;
    }
    return (NULL);
}