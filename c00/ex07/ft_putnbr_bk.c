/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/21 17:53:08 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char c;
	int div;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}

	div = nb　/ 10;//4
	if(div >= 1)
		ft_putnbr(div);

	c = '0' + nb % 10;
	write(1, &c, 1);

}

int main(void)
{
  int a;
  a = -2147483648;
  ft_putnbr(a);
  return(0);
}
