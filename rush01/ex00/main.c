/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatanimegumi <miyatanimegumi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:06:22 by tobinata          #+#    #+#             */
/*   Updated: 2020/09/20 01:01:32 by miyatanimeg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *input_orgnized(char *input, char *argv)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (argv[i] != 0)
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

int             main(int argc, char **argv)
{
        char    *after_orgnized;
        char    input[16];

        argc++;
        after_orgnized = input_orgnized(input, *argv);
        printf("%s", after_orgnized);
}
