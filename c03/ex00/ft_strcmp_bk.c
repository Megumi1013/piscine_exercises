#include <stdio.h>
#include <string.h>

int     ft_strcmp(char *s1, char *s2)
{
        while (*s1 != '\0' && (*s1 == *s2))
        {
                s1++;
                s2++;
        }
        return (*s1 - *s2);
}

int     main(void)
{
char *str1 = "4321";
char *str2 = "43210";

printf("%d\n", strcmp(str1, str2));
printf("%d\n", ft_strcmp(str1, str2));
}