char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while(dest[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}