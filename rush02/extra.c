/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:14:56 by tkoami            #+#    #+#             */
/*   Updated: 2020/09/28 22:09:46 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char*strdup(char *src)
{
char*dest;
inti;



dest = (char*)malloc(sizeof(char) *
char*strcat(char *s1, char *s2)
{
int i;
int j;

while(s1[i] != '\0')
i++;
while(s2 != '\0')
{
s1[i + j] = s2[j];
j++;
}
s1[j] = '\0';
return (s1);
}

voidput_char(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
}

intatoi_4d(char *str, int *i)
{
int nb;
int stopper;

nb = 0;
stopper = *i + 4;
while (*i < stopper)
{
nb = nb * 10 + str[*i];
(*i)++;
}
return (nb);
}

intour_atoi(char *str)
{
int nb;
int max;
int i;

max = 5;
i = 0;
nb = 0;
while (i < max)
{
nb = nb * 10 + str[i];
i++;
}
return (nb);
}