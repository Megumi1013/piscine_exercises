#include <stdio.h>
int ft_str_is_uppercase(char *str){
    while(*str != '\0')
    {
        if (!(*str >= 'A' && *str <= 'Z'))
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

	str_valid = "HELLO";
	str_invalid = "hello";
    str_null = "";
	printf("1: %d\n", ft_str_is_uppercase(str_valid));
	printf("0: %d\n", ft_str_is_uppercase(str_invalid));
    printf("1: %d\n", ft_str_is_uppercase(str_null));
}