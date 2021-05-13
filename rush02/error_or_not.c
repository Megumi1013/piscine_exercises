/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_or_not.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:08:02 by tkoami            #+#    #+#             */
/*   Updated: 2020/09/27 20:19:01 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

interror_judge_1(int ac, char *av)
{
int i;

i = 0;
while (av[i] != '\0')
{
if (!('0' <= av[i] && av[i] <= '9'))
return (1);
}
if (dict_error_judge("numbers_ja.dict"))
return (1);
return (0);
}

interror_judge_2(int ac, char *av1, char *av2)
{
int i;

i = 0;
while (av2[i] != '\0')
{
if (!('0' <= av2[i] && av2[i] <= '9'))
return (1);
}
dict_error_judge(av1);
return (0);
}

intdict_error_judge(char *file)
{
intfd;
charc[1];

fd = open(file, O_RDONLY);
while (c[0] == '\n')
read(fd, c, 1);
while ('0' <= c && c <= '9')
{
read(fd, c, 1);
while(c[0] == ' ')
read(fd, c, 1);
if (c[0] == ':')
{
read(fd, c, 1);
while (c[0] == ' ')
read(fd, c, 1);
if (32 <= c[0] && c[0] <= 126)
{
while (32 <= c[0] && c[0] <= 126)
read(fd, c, 1);
if (c[0] == '\n')
{
while (c[0] == '\n')
read(fd, c, 1);
}
}
}
}
if (read(fd, c, 1))
close (fd);
return (1);
close (fd);
return (0);
}