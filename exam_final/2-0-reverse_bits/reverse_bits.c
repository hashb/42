unsigned char   reverse_bits(unsigned char octet)
{
    int rev = 0;
    int itr = 8;

    while (itr--)
    {
        rev = (rev << 1) | (octet & 1);
        octet >>= 1;
    }
    return (rev);
}
