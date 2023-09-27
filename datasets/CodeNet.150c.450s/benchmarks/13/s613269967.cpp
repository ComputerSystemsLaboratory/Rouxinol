#include <stdio.h>

#define MAX 100

/*
    与えられるリング状の文字列を ring,
    そこから見つける文字列を make とする.
    --> ring の長さを取得しつつ，
        ring をふたつ連結した ring2 をつくる.        
        ring2 のあたまから make を探せばよい.
    --> make の長さを取得.
    --> ring2 のあたまから，make の一文字目に一致するものを探す．
        --> 一致したら，そこから ring2 を検査して
            make のすべての文字に一致するか調べる．
            --> 一致したら，検査を終えて Yes と表示．
            --> 一致しない場合，また ring2 から make の一文字目を探す．
        --> どれも一致しない場合，No と表示．
*/

int main(void)
{
    int i, j;

    char ring[MAX + 1];
    char make[MAX + 1];
    scanf("%s %s", ring, make);

    char ring2[MAX * 2 + 1];
    for (i = 0; (ring2[i] = ring[i]) != '\0'; i++){
        ;
    }
    int len_ring = i;
    for (i = 0; (ring2[len_ring + i] = ring[i]) != '\0'; i++){
        ;
    }

    for (i = 0; make[i] != '\0'; i++){
        ;
    }
    int len_make = i;

    enum {YES, NO} y_n;
    y_n = NO;
    for (i = 0; i < len_ring; i++){
        if (ring2[i] == make[0]){
            for (j = 0; j < len_make; j++){
                if (ring2[i + j] == make[j]){
                    y_n = YES;
                    continue;
                }else{
                    y_n = NO;
                    break;
                }
            }
            if (y_n == YES){
                break;
            }else{
                continue;
            }
        }
    }

    if (y_n == YES){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}