#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(i < n && src[i] !='\0')
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return(dest);
}

int		main(void)
{
	char src[]= "Hello World";
	char dest[11];

	strncpy(dest, src, 11);
	printf("%s\n", dest);

	ft_strncpy(dest, src, 11);
	printf("%s\n", dest);
}
