/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/20 22:34:57 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = -1;
	while (++i <= --size)
	//indexを１っこずつ増やす
	//sizeは一個ずつ減る
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
	}
}

int		main(void)
{
	int tab[5] = {0,1,2,3,4};
	int size =5;
	int i = 0;

	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
}
