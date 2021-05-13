/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 21:19:49 by tkoami            #+#    #+#             */
/*   Updated: 2020/09/28 22:09:38 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

intprocess_1000(int nb, num_list *tag, int *flag)
{
intj;
int x;

j = 0;
x = nb / 1000;
nb = nb % 1000;
if (x)
{
while (tag[j].key != x)
j++;
put_char(tag[j].value);
j = 0;
while (tag[j].digits != 1000)
j++;
put_char(tag[j].value);
*flag = 1;
}
return (nb);
}

intprocess_100(int nb, num_list *tag, int *flag)
{
int j;
int x;

j = 0;
x = nb / 100;
nb = nb % 100;
if (x)
{
while (tag[j].key != x)
j++;
*put_char(tag[j].value);
while (tag[j].digits != 100)
j++;
put_char(tag[j].value);
*flag = 1;
}
return (nb);
}

intprocess_10(int nb, num_list *tag, int *flag)
{
int j;
int x;

j = 0;
x = nb / 10;
nb = nb % 10;
if (x)
{
while (tag[j].key != x)
j++;
*put_char(tag[j].value);
while (tag[j].digits != 10)
j++;
put_char(tag[j].value);
*flag = 1;
}
return (nb);
}

voidprocess_1(int nb, num_list *tag, int *flag)
{
int j;

j = 0;
if (nb)
{
while (tag[j].key != nb)
j++;
put_char(tag[j].value);
*flag = 1;
}
}