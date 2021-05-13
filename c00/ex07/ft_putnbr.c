/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/20 14:37:21 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nbr)
{
	char c;
	int div;

	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}

	div = nbr / 10;
	if(div >= 1)
		ft_putnbr(div);

	c = '0' + nbr % 10;
	write(1, &c, 1);

}

int main(void)
{
  int a;
  a = -2147483648;
  ft_putnbr(a);
  return(0);
}
