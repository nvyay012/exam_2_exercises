unsigned char	reverse_bits(unsigned char octet)
{
    char    res;
    int     i;

    res = 0;
    i = 0;
    while (i < 8)
    {
        res = (res << 1) | (octet & 1));
        octet >>= 1;
    }
    return (res);
}