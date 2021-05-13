#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while(*str != '\0')
    {
        if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
        {
            return(0);
        }
    str++;
    }
    return(1);
}

int		main(void)
{
	char *str_valid = "aBCd";
	char *str_invalid = "123a";
    char *str_null = "";

	printf("%d\n",ft_str_is_alpha(str_valid));
	printf("%d\n",ft_str_is_alpha(str_invalid));
    printf("%d\n",ft_str_is_alpha(str_null));
}