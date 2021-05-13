/*                                                        :::      ::::::::   */
/*   convet.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoami <tkoami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 02:36:02 by tkoami            #+#    #+#             */
/*   Updated: 2020/09/27 02:39:07 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

charget_nbr(int fd, char c)
{
inti;
char*tmp[120];

while (c[0] == '\n')
read(fd, c, 1);
while (0 <= c[0] && c[0] <= 9)
{
c[0] = tmp[i];
read(fd, c, 1);
i++;
}
return (tmp);
}

intget_digit(char *tmp)
{
int i;

i = 0;
while (tmp[i] != '\0')
i++;
return (i / 4);
}

char*get_value(int fd, char *c)
{
char tmp[120];

while(c[0] != '\n')
{
tmp[i] = c[0];
read(fd, c, 1);
i++;
}
return (tmp);
}

num_list*take_in(char *file)
{
inti;
intfd;
intline;
char c[1];
char*tmp;
num_list*tab;

fd = open(file, O_RDONLY);
while (read(fd, c, 1) != 0)
{
if (c[0] == '\n')
{
read(fd, c, 1);
if(c[0] != '\n')
line++;
}
}
tab = (char*)malloc(sizeof(char) * (line + 1));
//not yet return to start
i = 0;

while (i < line)
{
tab[i].key = our_atoi(get_nbr(fd, c));
tab[i].digits = get_digit(get_nbr(fd, c));
while (c[0] == ' ')
read(fd, c, 1);
if (c[0] == ':')
read(fd, c, 1);
while (c[0] == ' ');
read(fd, c, 1);
tmp = get_value(fd, c);
tab[i].value = ft_strdup(tmp);
free(tmp);
i++;
}
close(fd);
return(tab);
}