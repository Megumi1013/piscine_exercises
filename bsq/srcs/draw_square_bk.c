#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int min(int n1, int n2, int n3){
    if (n1 <= n2 && n1 <= n3){
        return (n1);
    }
    else if (n2 <= n1 && n2 <= n3){
        return (n2);
    }
    else{
        return (n3);
    }
}

int get_column(char *ch, int read_size){
    
    int k = 0;
    int p = 0;
    int column = -1;

    while(k < read_size){
        if(ch[k] == '\n'){
            p++;
        }
        if (p == 1){
            column++;
        }
        if (p == 2){
            break;
        }
        k++;
    }
    return (column);
}
// int square_length(int row, int column)
// {
//     int i = 0;
//     int j = 0;

// }
// void func1(int row,int column, char *ch){
//     int i = 0;
//     int j = 0;
//     int column1 = 5;
//     char **G[1024][1024];

//     while(i < row){
//             while(j<column){
//                 G[i][j] = ch[i * (column + 1) + j + column1];
//                 j++;
//             }
//             i++;
//             j = 0;
//         }
//     return(G);
// }

int main(int argc, char *argv[]){

    int m = 1;
    char    *ch;

    while(m < argc){

        ch = (char*)malloc(sizeof(char) * m);
        if(ch == NULL) {
            exit(EXIT_FAILURE);
        }

        int fd = open(argv[m], O_RDONLY);//chはファイルの中身全部入れたの
        int read_size = read(fd,ch,1000);
        int row = ch[0] - 48;
        char str_obstacle = ch[2];
        char str_full = ch[3];
        int column = get_column(ch, read_size);


        char G[1024][1024];
        int i = 0;
        int j = 0;
        int column1 = 5;

        // 2次元配列に詰め替える 関数1
        while(i < row){
            while(j<column){
                G[i][j] = ch[i * (column + 1) + j + column1];
                j++;
            }
            i++;
            j = 0;
        }
        // func1(row, column,ch);
        // 正方形の終点と一辺の長さを求める 関数2
        int W[1024][1024];
        int max_width = 0;
        int end_i = 0;
        int end_j = 0;
        i = 0;
        j = 0;
        while(j < row){
            W[j][0] = (G[j][0] == str_obstacle) ? 0 : 1;
            j++;
        }
        while(i < column){
            W[0][i] = (G[0][i] == str_obstacle) ? 0 : 1;
            i++;
        }

        i = 0;
        j = 0;

        while(i < row){
            while(j < column){
                if(G[i][j] == str_obstacle){
                    W[i][j] = 0;
                }
                else{
                    W[i][j] = min(W[i-1][j-1], W[i-1][j], W[i][j-1]) + 1;
                    if(max_width < W[i][j]){
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

        // 出力を行う 関数3
        while(i < row){
            while(j < column){
                if(i > start_i && i <= end_i && j > start_j && j <= end_j){
                    write(1, &str_full, 1);
                }
                else{
                    write(1, &G[i][j], 1);
                }
                j++;
            }
            j = 0;
            write(1, "\n", 1);
            i++;
        }

        // 改行処理
        write(1, "\n", 1); 

        // メモリの解放
        free(ch);

        // ファイルを閉じる、エラーチェックする
        int cl = close(fd);
        if(cl == 0){
        }
        else{
            exit(1);
        }

        // ファイル数のカウントアップ
        m++;
    }

    return 0;
}