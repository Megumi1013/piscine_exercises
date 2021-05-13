unsigned int ft_strlen(char *dest)
{
	unsigned int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned i;
    unsigned int destlen;
    unsigned int srclen;

    destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
    if (destlen >= size)
    {
		return (srclen + size);
    }
	if (size == 0)
    {
		return (srclen);
    }
    i = 0;
	while (src[i] != '\0' && i < (size - destlen))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	return (destlen + srclen);
}