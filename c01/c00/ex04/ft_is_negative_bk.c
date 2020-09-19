/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/16 00:03:01 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_is_negative(int n)
{
	char print_n, print_p;
	print_n = 'N';
	print_p = 'P';

	if (n < 0)
	{
		write(1, &print_n, 1);
	}
	else if (n > 0 || n == (int)NULL)
	{
		write(1, &print_p, 1);
	}
}
int main(void)
{
	int n;

	scanf("%d", &n);
	ft_is_negative(n);
}
