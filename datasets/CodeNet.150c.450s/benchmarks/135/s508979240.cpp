#include<bits/stdc++.h>
using namespace std;
int H,W;
int h[1500],w[1500];
 
void solve(){
    for(int i=0;i<H;i++)scanf("%d",&h[i]);
    for(int i=0;i<W;i++)scanf("%d",&w[i]);
 
    int mxh=accumulate(h,h+H,0);
    int mxw=accumulate(w,w+W,0);
 
    vector<int>th(mxh+1,0),tw(mxw+1,0);
 
    for(int i=0;i<H;i++){
        int sum=0;
        for(int j=i;j<H;j++){
            sum+=h[j];
            th[sum]++;
        }
    }
    for(int i=0;i<W;i++){
        int sum=0;
        for(int j=i;j<W;j++){
            sum+=w[j];
            tw[sum]++;
        }
    }
    long long ans=0;
    for(int i=1;i<=min(mxh,mxw);i++){
        ans+=(long long)th[i]*tw[i];
    }
 
    printf("%d\n",ans);
}
int main(){
    while(scanf("%d%d",&H,&W),H||W)solve();
}
