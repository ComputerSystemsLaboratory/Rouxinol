#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int cnt[100]={0};
    rep(i,10)rep(j,10)rep(k,10)rep(l,10){
        int a=i+j+k+l;
        if(a<=50)cnt[a]++;
    }

    int n;
    while(scanf("%d",&n)!=EOF)printf("%d\n",cnt[n]);

    return 0;
}