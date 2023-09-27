#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int R, C;
const int MAX_R = 12;
const int MAX_C = 10020;
bool omote[MAX_R][MAX_C];
int avai[MAX_C];
int avai_ori[MAX_C];  //変化させない
int main(int argc, const char * argv[])
{
    while (true) {
        scanf("%d %d", &R, &C);
        if (R == 0 && C == 0) break;
        int ret = 0;
        memset(avai_ori, 0, sizeof(avai_ori));
        memset(avai, 0, sizeof(avai));
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                int n;
                scanf("%d", &n);  //表なら1,裏なら0
                omote[i][j] = n;
                if (n == 0) {//裏の場合
                    avai[j]++;
                    avai_ori[j]++;
                }
            }
        }
        
        for (int i = 0; i < (1 << R); i++) {
            for (int j = 0; j < C; j++) avai[j] = avai_ori[j];
            for (int j = 0; j < R; j++) {
                if ((i >> j)&1) {  //j行目を裏返す場合
                    for (int k = 0; k < C; k++) {
                        if (omote[j][k]) avai[k]++;
                        else avai[k]--;
                    }
                }
            }
            int sum = 0;
            for (int j = 0; j < C; j++) {
                sum += max(avai[j], R-avai[j]);
            }
            ret = max(ret, sum);
        }
        printf("%d\n", ret);
    }
    
    return 0;
}