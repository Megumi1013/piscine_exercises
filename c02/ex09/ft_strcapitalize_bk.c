#include <stdio.h>

char *ft_strcapitalize(char *str);

void    ft_str(char *str){
    int i;

    i = 0;
    while (str[i] != '\0')
    {
         if (!((str[i] >= 'a' && str[i] <= 'z')
         || (str[i] >= 'A' && str[i] <= 'Z')
         || (str[i] >= '0' && str[i] <= '9')))
         {
           if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
           str[i + 1] += 'A' - 'a';
         }
        i++;
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] += 'A' - 'a';
}

char *ft_strcapitalize(char *str)
{
    int c;

    c = 0;
    while(str[c] != '\0')
    {
        if (str[c] >= 'A' && str[c] <= 'Z')
        {
            str[c] += 'a' - 'A';
        }
        c++;
    }
    ft_str(str);
    return(str);
}
#include <stdio.h>
int		main(void)
{
	char	str_before[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char	str_before2[] = "fdnd8@O7jpin5@ec^^r|T#ubc>^!:}:'=fsd7d@$";
    char	str_before3[] = "MJUj@45V;V*EWmR*?{$";

	ft_strcapitalize(str_before);
	printf("%s\n", str_before);
    ft_strcapitalize(str_before2);
	printf("%s\n", str_before2);
    ft_strcapitalize(str_before3);
	printf("%s\n", str_before3);
}