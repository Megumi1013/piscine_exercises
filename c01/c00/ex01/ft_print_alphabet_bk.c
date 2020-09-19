/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_bk.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/15 22:50:52 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char alphabet;
	alphabet = 'a';

	while (alphabet <= 'z')
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}

int main(void)
{
	ft_print_alphabet();
}
