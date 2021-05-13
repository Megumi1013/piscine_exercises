int ft_iterative_factorial(int nb)
{
    int i;
    int j;

if (nb < 0)
return(0);
    i = 1;
    j = 1;
    while (i < nb + 1)
    j = j * i++;
    return(j);
}

#include <stdio.h>
int main(void)
{
int n;

n = 4;
printf("fact(%d) = %d\n", n, ft_iterative_factorial(n));
}