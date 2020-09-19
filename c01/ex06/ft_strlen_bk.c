/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/19 02:08:42 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	// int length;
	// length = 0;

	// while (*str != '\0')
	// {
	// length++;
	// str++;
	// }
	// return(length);

	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int		main(void)
{
	char string[15];
	char *first_pointer;
	int length;

	string[0] = 'H';
	string[1] = 'e';
	string[2] = 'l';
	string[3] = 'l';
	string[4] = 'o';
	string[5] = ' ';
	string[6] = 'W';
	string[7] = 'o';
	string[8] = 'r';
	string[9] = 'l';
	string[10] = 'd';
	string[11] = ' ';
	string[12] = '4';
	string[13] = '2';
	string[14] = '\0';
	first_pointer = &string[0];
	length = ft_strlen(first_pointer);
	printf("%d\n",length);
}


