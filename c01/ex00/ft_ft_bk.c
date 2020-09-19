/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:23:54 by mmiyatan          #+#    #+#             */
/*   Updated: 2020/09/18 13:50:18 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int *x = NULL;
    ft_ft(x);
    printf("after: %d\n",*x);
}
