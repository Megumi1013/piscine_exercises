#include <unistd.h>

void    ft_putnbr(int nb)
{
        char c;
        int div;

        if (nb == -2147483648)
        {
                write(1, "-2147483648", 11);
                return ;
        }
        else if (nb < 0)
        {
                write(1, "-", 1);
                nb = nb * (-1);
        }
        div = nb / 10;
        if (div >= 1)
                ft_putnbr(div);
        c = '0' + nb % 10;
        write(1, &c, 1);
}