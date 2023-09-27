#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<iostream>
using namespace std;
int min(int x, int y)
{
    return x > y ? y : x;
}

/*
dp(i, j) 定义：字符串s1 0到i 与 字符串s2 0到j 之间的距离
也就是：s1(0, i) s2(0, j)之间的距离
*/
int minDistance(char* word1, char* word2) {
    int l1 = strlen(word1);
    int l2 = strlen(word2);

    if (l1 == 0 && l2 == 0) {
        return 0;
    }

    //初始化
    int dp[l1+1][l2+1];
    for(int i=0; i<=l1; ++i){
        for(int j=0; j<=l2; ++j){
            dp[i][j] = 0;
        }
    }

    //一直删除，需要l1步
    for(int i=0; i<= l1; ++i){
        dp[i][0] = i;
        //printf("%d %d -> %d\n", i, 0, dp[i][0]);
    }

    //一直增加，需要l2步
    for(int j=0; j<=l2; ++j){
        dp[0][j] = j;
        //printf("%d %d -> %d\n", 0, j, dp[0][j]);
    }
//自底向上
    for(int i=1; i<= l1; ++i){
        for(int j=1; j<= l2; ++j){
            //置换
            int replace = word1[i-1] == word2[j-1] ? dp[i - 1][j - 1] : dp[i - 1][j - 1] + 1;
            int ins_del = min(dp[i][j - 1] + 1, dp[i - 1][j] + 1);
            dp[i][j] = min(replace, ins_del);
        }
    }
    return dp[l1][l2];
}

int main()
{
    char s[2010],c[2010];
    cin>>s>>c;
    printf("%d\n", minDistance(s, c));
    return 0;
}


