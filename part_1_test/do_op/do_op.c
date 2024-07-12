#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int do_op(int n1, int n2, char c)
{
    int res = 0;

    if (c == '+')
        res = n1 + n2;
    else if (c == '-')
        res = n1 - n2;
    else if (c == '*')
        res = n1 * n2;
    else if (c == '/')
        res = n1 / n2;
    else if (c == '%')
        res = n1 % n2;
    return (res);
}

int main (int ac, char **av)
{
    int n1;
    int n2;
    int rs;

    if (ac == 4)
    {
        n1 = atoi(av[1]);
        n2 = atoi(av[3]);
        rs = do_op(n1, n2, av[2][0]);
        printf("%d\n", rs);
    }
    else
        write (1, "\n", 1);
    return (0);
}