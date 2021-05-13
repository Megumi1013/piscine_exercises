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
	while (*str != '\0')
	{
		i = 0;
		while (*str == to_find[i] && i < len_to_find)
		{
			i++;
			str++;
		}
        if (to_find[i] == '\0')
		return (str - i);
		str++;
	}
	return (0);
}