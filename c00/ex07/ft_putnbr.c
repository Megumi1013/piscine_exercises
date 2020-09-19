/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/18 22:47:09 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nbr)
{
	char c;
	ft_putnbr(nbr/10);
	c = '0' + nbr % 10;

    if (nbr > 9)
	{
    	write(1, &c,1);
	}
	else if (nbr < 0)
	{
    	write(1, "-",1);
		nbr = nbr*(-1);
	}

    c = '0' + nbr % 10;
    write(1, &c,1);
}
int main(void)
{
	int a;
	a = -10;
	ft_putnbr(a);
	return (0);
}
