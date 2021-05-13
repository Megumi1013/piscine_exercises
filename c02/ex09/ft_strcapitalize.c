char *ft_strcapitalize(char *str);
void    ft_str(char *str){
    int i;

    i = 0;
    while (str[i] != '\0')
    {
         if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
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
    while(c != 0)
    {
        if (str[c] >= 'A' && str[c] <= 'Z'){
            str[c] += 'a' - 'A';
        }
        c++;
    }
    ft_str(str);
    return(str);
}