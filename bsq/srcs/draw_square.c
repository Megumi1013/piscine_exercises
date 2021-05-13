#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int min(int n1, int n2, int n3)
{
    if (n1 <= n2 && n1 <= n3)
    {
        return (n1);
    }
    else if (n2 <= n1 && n2 <= n3)
    {
        return (n2);
    }
    else
    {
        return (n3);
    }
}

int get_column(char *ch, int read_size)
{
    int k;
    int p;
    int column;

    k = 0;
    p = 0;
    column = -1;

    while(k < read_size)
    {
        if(ch[k] == '\n')
        {
            p++;
        }
        if (p == 1)
        {
            column++;
        }
        if (p == 2)
        {
            break;
        }
        k++;
    }
    return (column);
}
int main(int argc, char *argv[])
{
    int m;
    char    *ch;

    m = 1;
    while(m < argc)
    {
        ch = (char*)malloc(sizeof(char) * m);
        if(ch == NULL) {
            exit(EXIT_FAILURE);
        }

        int fd = open(argv[m], O_RDONLY);
        int read_size = read(fd,ch,1000);
        int row = ch[0] - 48;
        char str_obstacle = ch[2];
        char str_full = ch[3];
        int column = get_column(ch, read_size);
        char G[1024][1024];
        int i;
        int j;
        int column1 = 5;
        i = 0;
        j = 0;
        while(i < row)
        {
            while(j<column)
            {
                G[i][j] = ch[i * (column + 1) + j + column1];
                j++;
            }
            i++;
            j = 0;
        }
        int W[1024][1024];
        int max_width = 0;
        int end_i = 0;
        int end_j = 0;
        i = 0;
        j = 0;
        while(j < row)
        {
            W[j][0] = (G[j][0] == str_obstacle) ? 0 : 1;
            j++;
        }
        while(i < column)
        {
            W[0][i] = (G[0][i] == str_obstacle) ? 0 : 1;
            i++;
        }
        i = 0;
        j = 0;
        while(i < row)
        {
            while(j < column)
            {
                if(G[i][j] == str_obstacle){
                    W[i][j] = 0;
                }
                else
                {
                    W[i][j] = min(W[i-1][j-1], W[i-1][j], W[i][j-1]) + 1;
                    if(max_width < W[i][j])
                    {
                        end_i = i;
                        end_j = j;
                        max_width = W[i][j];
                    }
                }
                j++;
            }
            j = 0;
            i++;
        }
        i = 0;
        j = 0;
        int start_i = end_i - max_width;
        int start_j = end_j - max_width;
        while(i < row)
        {
            while(j < column)
            {
                if(i > start_i && i <= end_i && j > start_j && j <= end_j)
                {
                    write(1, &str_full, 1);
                }
                else
                {
                    write(1, &G[i][j], 1);
                }
                j++;
            }
            j = 0;
            write(1, "\n", 1);
            i++;
        }
        write(1, "\n", 1);
        free(ch);
        int cl = close(fd);
        if(cl == 0)
        {
        }
        else
        {
            exit(1);
        }
        m++;
    }
    return 0;
}