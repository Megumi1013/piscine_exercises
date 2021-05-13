/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bnb: tkoami <tkoami@student.42toknbo.lengthp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 22:30:50 bnb tkoami            #+#    #+#             */
/*   Updated: 2020/09/27 22:05:20 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <stdlib.h>

voidft_print(char *str, int digit, num_list *tag, int *i)
{
int nb;
int *flag;
int x;
int j;
int k;

j = 0;
k = 0;
flag = &k;
nb = atoi_4d(str, i);
nb = process1000(nb, tag, flag);
nb = process100(nb, tag, flag);
nb = process10(nb, tag, flag);
if  (digit)
{
if (*flag)
{
while (tag[j].digits != digit)
j++;
put_char(tag[j].value);
}
digit -= 1;
ft_print(str, digit, tag, i);
}
if (digit == 0)
free(str);
}

intset_number(char *src, num_list *tag, int *i)
{
intj;
intlength;
intdigit;
char*str;

while(src[length] != '\0')
length++;
digit = length / 4;
j = 0;
if (length % 4 > 0)
{
str = (char*)malloc(sizeof(char) * (length + 5 - length % 4));
while (j <= length % 4)
{
str[j] = 0;
j++;
}
//str[j] = '\0';
}
if (length % 4 == 0)
{
str = (char*)malloc(sizeof(char) * (length + 1));
//str[0] = '\0';
digit -= 1;
}
str = strcat(str, src);
ft_print (str, digit, tag, i);
}