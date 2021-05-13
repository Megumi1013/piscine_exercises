#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (src[i] != '\0')
    {
		i++;
    }
	if (size != 0)
	{
		while (src[i] != '\0' && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);//返り値はsrcの文字数
}

int				main(void)
{
	char	*string1;
	char	string2[6];

	string1 = "0";
	printf("base   : %s\n", string1);

	ft_strlcpy(string2, string1, 6);
	printf("cpy ft : %s\n", string2);
}