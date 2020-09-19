/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/18 12:44:45 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
    int x;
    int y;
	x = 2;
	y = 3;
	printf("%d,%d",x, y);

	ft_swap(&x ,&y);
	printf("%d,%d",x, y);
    return (0);
}
