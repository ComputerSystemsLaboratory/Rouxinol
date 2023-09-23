#include <bits/stdc++.h>
using namespace std;
int X[100];
int main() {
    int N,M,P;
    while(scanf("%d %d %d",&N,&M,&P),N) {
        int sum=0;
        for(int i=0;i<N;i++) scanf("%d",&X[i]),sum+=X[i]*100;
        sum-=sum*P/100;
        if(X[M-1]==0) printf("0\n"); else printf("%d\n",sum/X[M-1]);        
    }
}