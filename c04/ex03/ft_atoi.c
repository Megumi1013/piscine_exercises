
#include<stdio.h>
#include<stdlib.h>

int ft_atoi(char *str)
{
        int i;
        int flag;
        int result;
        
        i = 0;
        flag = 1;
        result = 0;
        while (str[i] == ' ' || str[i] == '\f' || str [i] == '\n'
                        || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
        {
                i++;
        }
        while (str[i] == '+' || str [i] == '-')
        {
                if (str[i] == '-')
                        flag *= -1;
                i++;
        }
        while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
        {
                result = result * 10;
                result += str[i] - '0';
                i++;
        }
        return (flag * result);
}

int             main(void)
{
        char *str = "---+-+1234ab567";
        printf("%d",ft_atoi(str));

}