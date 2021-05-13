#include <stdio.h>
#include <string.h>

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
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (destlen + srclen);
}

int				main(void)
{
	char	dest[] = "Hello";
	char	src[]= " World";

	printf("%d\n", ft_strlcat(dest, src, 13));
}