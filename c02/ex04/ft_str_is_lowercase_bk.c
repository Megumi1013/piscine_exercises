#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    while(*str != '\0')
    {
        if (!(*str >= 'a' && *str <= 'z'))
        {
            return(0);
        }
    str++;
    }
    return(1);
}

int		main(void)
{
	char *str_valid;
	char *str_invalid;
    char *str_null;

	str_valid = "hello";
	str_invalid = "hellO";
    str_null = "";
	printf("1: %d\n", ft_str_is_lowercase(str_valid));
	printf("0: %d\n", ft_str_is_lowercase(str_invalid));
    printf("1: %d\n", ft_str_is_lowercase(str_null));
}