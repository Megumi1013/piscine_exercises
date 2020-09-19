/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/15 23:20:51 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	char numbers;
	numbers = '0';

	while (numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}
int main(void)
{
	ft_print_numbers();
}
