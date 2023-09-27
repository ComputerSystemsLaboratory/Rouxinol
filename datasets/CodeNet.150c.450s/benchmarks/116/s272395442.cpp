#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    while(1){
        int N,M;
        int lis[100002];
        cin>>N>>M;
        if(N==0&&M==0)break;
        for(int i=0;i<N;i++)cin>>lis[i];
        int now=0,ans=0;
        for(int i=0;i<M;i++)now+=lis[i],ans+=lis[i];
        for(int i=1;i+M<=N;i++)now=now-lis[i-1]+lis[i+M-1],ans=max(now,ans);
        cout<<ans<<endl;
    }
    return 0;
}