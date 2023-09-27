/**
这个题目要求依次装车
*/

#include<stdio.h>
#include<iostream>

#define MAX_N 100000
#define MAX_K 100000
#define MAX_W 10000
#define MAX_P (MAX_N*MAX_W)

typedef long long LL;

using namespace std;

int goods[MAX_N];

bool Judge(int P, int N, int K){
    int goodsIdx=0;
    for(int k=0; k<K; k++){
        //依次装车
        int restVol=P;
        while(restVol>=goods[goodsIdx]){
            restVol-=goods[goodsIdx];
            goodsIdx++;
            if(goodsIdx==N)
                return true;
        }
    }
    return false;
}

int main()
{
    int N, K;
    scanf("%d%d",&N, &K);
    for(int i=0; i<N; i++)
        scanf("%d", goods+i);
    int l=0, r=MAX_P;
    while(l<=r){
        int mid=(l+r)/2;
        if(Judge(mid, N, K)){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    printf("%d\n", r+1);
    return 0;
}

