/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/19 02:09:15 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

