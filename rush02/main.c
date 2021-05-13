/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:25:10 by tkoami            #+#    #+#             */
/*   Updated: 2020/09/27 20:19:33 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

intcase_of_1(char *av)
{
num_list*tag;
int*i;
inttmp;

tmp = 0;
i = &tmp;
if (error_judge_1(av))
{
write(1, "Error\n", 6);
return (0);
}
if (dict_error_judge("numbers_ja.dict"))
{
write(1, "Dict Error\n", 11);
return (0);
}
tag = take_in("numbers_ja.dict");
if (set_number(av, tag, i))
return (1);
return (0);
}

intcase_of_2(char *av1, char *av2)
{
num_list*tag;
int*i;
inttmp;

tmp = 0;
i = &tmp;
if (error_judge_2(av2))
{
write(1, "Error\n", 6);
return (0);
}
if (dict_error_judge(av1))
{
write(1, "Dict Error\n", 11);
return (0);
}
tag = take_in(av1);
if (set_number(av2, tag, i))
return (1);
return (0);
}

intmain(int argc, char *argv[])
{
tmp = 0;
i = &tmp;
if (argc > 3 || argc == 1)
write(1, "Error\n", 6);
if (argc == 2)
if (case_of_1(argv[1]))
write(1, "Dict Error\n", 11);
if (argc == 3)
if(case_of_2(argv[1], argv[2]))
write(1, "Dict Error\n", 11);
return (0);
}