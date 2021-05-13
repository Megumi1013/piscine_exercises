#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

	i = 0;
    while(src[i] != '\0')
	{
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int		main(void)
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("base   : %s\n", src);
	strcpy(dest, src);
	printf("cpy    : %s\n", dest);
	ft_strcpy(dest, src);
	printf("ft_cpy : %s\n", dest);
}