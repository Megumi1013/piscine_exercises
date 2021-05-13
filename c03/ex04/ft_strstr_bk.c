#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int len_to_find;

	len_to_find = ft_strlen(to_find);
	/* strを1文字ずつずらす */
	while (*str != '\0')
	{
		i = 0;
		/* to_findの１文字目がでてきたら、2文字目以降も同じか確認する。
		   str != to_findか、to_findが最後まで一緒だったら、whileを抜ける。*/
		while (*str == to_find[i] && i < len_to_find)
		{
			printf("str:%c, to_find:%c\n", *str, to_find[i]);
			i++;
			str++;
			/* to_findが最後まで確認できたら、
			   成功パターンとして1文字目のアドレスを返す */
		}
        if (to_find[i] == '\0')
		return (str - i);
		str++;
	}
	return (0);
}
int main(void)
{
        char    s1[] = "abcdefghijklmn";        /* 検索対象文字列 */
        char    s2[] = "def";                 /* 一致する場合 */
        char    s3[] = "xyz";                   /* 一致しない場合 */
        char    s4[] = "abcdefghijklmnopqr";    /* 検索対象文字列より長い場合 */
        char    s5[] = "";                      /* \0 */
        char    *sp;

        sp = ft_strstr(s1,s2);
        printf("一致する場合 : %s\n",sp);
        sp = ft_strstr(s1,s3);
        printf("一致しない場合 : %s\n",sp);
        sp = ft_strstr(s1,s4);
        printf("検索対象文字列より長い場合 : %s\n",sp);
        sp = ft_strstr(s1,s5);
        printf("\\0 : %s\n",sp);

        return 0;
}
