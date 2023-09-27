#include <stdio.h>
#include <fstream>
#include <iostream>
#include <algorithm>
#define MAX_N   101
#define MAX_wv  101
#define MAX_W   10001
using namespace std;

int n = 4;
int W = 5;
int w[MAX_wv];//   =   {2,2,1,3};
int v[MAX_wv];//   =   {4,5,2,8};
int dp[MAX_N][MAX_W];//    =   {0};



int main(){
    scanf("%d %d",&n,&W);
    for(int i = 0; i < n; i++){
        scanf("%d %d",&v[i],&w[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < W+1; j++){
            if(j < w[i]){
                dp[i+1][j]  =   dp[i][j];
            }else{
                dp[i+1][j]  =   max(dp[i][j],dp[i][j-w[i]]+v[i]);
            }
        }
    }
//    for(int i = 0; i < n+1; i++){
//        for(int j = 0; j < W+1; j++){
//            printf("%2d ",dp[i][j]);
//        }
//        printf("\n");
//    }
    printf("%d\n",dp[n][W]);
    return 0;
}