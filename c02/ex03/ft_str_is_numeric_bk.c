#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    while(*str != '\0')
    {
        if (!(*str >= '0' && *str <= '9'))
        {
            return(0);
        }
    str++;
    }
    return(1);
    //NULLのときorwhileの条件に当てはまらないときはここで1返す
}

int		main(void)
{
	char *str_valid = "123456";
	char *str_invalid = "123A56";
    char *str_null = "";

	printf("%d\n", ft_str_is_numeric(str_valid));
	printf("%d\n", ft_str_is_numeric(str_invalid));
    printf("%d\n", ft_str_is_numeric(str_null));
}