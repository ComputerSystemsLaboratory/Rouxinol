#include<bits/stdc++.h>
using namespace std;
int H,W;
int h[1500],w[1500];

void solve(){
    for(int i=0;i<H;i++)scanf("%d",&h[i]);
    for(int i=0;i<W;i++)scanf("%d",&w[i]);

    map<int,int>Y,X;

    for(int i=0;i<H;i++){
        int sum=0;
        for(int j=i;j<H;j++){
            sum+=h[j];
            Y[sum]++;
        }
    }

    for(int i=0;i<W;i++){
        int sum=0;
        for(int j=i;j<W;j++){
            sum+=w[j];
            X[sum]++;
        }
    }

    long long ans=0;

    for(map<int,int>::iterator it=Y.begin();it!=Y.end();it++){
        ans+=(long long)it->second*X[it->first];
    }

    printf("%lld\n",ans);

}

int main(){
    while(scanf("%d%d",&H,&W),H||W)solve();
    return 0;
}