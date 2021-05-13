/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:06:22 by tobinata          #+#    #+#             */
/*   Updated: 2020/09/20 01:51:32 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    input_orgnized(char* str, int i)
{
        int j;

        j = 0;
        while (i <= i + 7)
        {
                if (argv[i] == ' ')
                {
                        i++;
                }
                if (!('1' <= argv[i] && argv[i] <= '4'))
                {
                        write(1, "Error\n", 1);
                        break ;
                }
                if ('1' <= argv[i] && argv[i] <= '4')
                {
                        input[j] = argv[i];
                        j++;
                }
                i++;
        }
        return (input);
}

int             main(int argc, char* argv)//argc 数 argvは中身
{
       if(argc != 2){
               write(1, "Error\n", 6);
       }
       else{

       }
       return(0);
