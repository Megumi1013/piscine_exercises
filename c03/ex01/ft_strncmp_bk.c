#include <stdio.h>
#include<string.h>
int             ft_strncmp(char *s1, char *s2, unsigned int n)
{
        while (*s1 != '\0' && (*s1 == *s2) && n > 0)
        {
                s1++;
                s2++;
                n--;
        }
        return (*s1 - *s2);
}
int	main(void)
{
	char str1[] = "4321";
	char str2[] = "43210";
    printf("%d\n", strncmp(str1, str2, 4));
	printf("%d\n", ft_strncmp(str1, str2, 4));
}

//  int ft_strncmp(char *s1, char *s2, unsigned int n)
//   {
//          unsigned int    i;
//   
//   i = 0;
//   while ((i < n) && (s2[i] != '\0' || s1[i] != '\0'))
//   {
//       if (s1[i] != s2[i])
//       return (s1[i] - s2[i]);
//   else
//   i++;
//   }
//   return (0);
//   }