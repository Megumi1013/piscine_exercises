#include <stdio.h>
int ft_str_is_printable(char *str)
{
    while(*str != '\0')
    {
        if (!(*str >= 32 && *str <= 126))
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

	str_valid = "\7F";
	str_invalid = "HELLO";
    str_null = "";
	printf("0: %d\n", ft_str_is_printable(str_valid));
	printf("1: %d\n", ft_str_is_printable(str_invalid));
    printf("1: %d\n", ft_str_is_printable(str_null));
}