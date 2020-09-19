/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_bk.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/18 12:58:18 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_number(int a, int b)
{
	char p;
	char q;
	char r;
	char s;
	p = 48 + a / 10;//9
	q = 48 + a % 10;//余が8
	r = 48 + b / 10;//9
	s = 48 + b % 10;//余が9
	write(1, &p, 1);
	write(1, &q, 1);
	write(1, " ", 1);
	write(1, &r, 1);
	write(1, &s, 1);


}

void ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = x+1;
		while (y <= 99)
		{
			ft_print_number(x,y);
			if(x != 98){
			write(1, ", ", 2);
	}
			y++;
		}
		x++;
	}

}

int main(void)
{
	 ft_print_comb2();
	return (0);
}
