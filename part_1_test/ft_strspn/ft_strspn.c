#include <stddef.h>

size_t  ft_strspn(const char *s, const char *accept)
{
    size_t     i = 0;
    size_t     j = 0;

    while (s[i])
    {
        while (accept[j])
        {
            if (s[i] == accept[j])
                break ;
            j++;
        }
        if (!accept[j])
            break ;
        i++;
    }
    return (i);
}