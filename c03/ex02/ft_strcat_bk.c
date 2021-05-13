#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;//iをnullになるまで増やしてあげる
    }
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];//ここでのiは上で増やした数なのでdestの終端文字
        i++;
        j++;//srcを入れてあげる
    }
    dest[i] = '\0';//whileが回りきった最後に終端文字を追加してあげる
    return(dest);
}
int main(void) {
    char str1[] = "Hello ";
    char str2[] = "World!";

    // 文字列の連結
    printf("%s$\n", ft_strcat(str1, str2));
    return 0;
}