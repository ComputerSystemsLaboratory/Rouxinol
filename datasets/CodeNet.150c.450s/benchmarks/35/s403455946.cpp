#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    while(1){
        int N;
        cin>>N;
        if(!N)break;
        int rui[10000]={0};
        for(int i=1;i<=N;i++){
            int a;
            cin>>a;
            rui[i]=rui[i-1]+a;
        }
        int ans=-2000000000;
        //for(int i=0;i<=N;i++)printf("[%d]",rui[i]);
        for(int i=0;i<=N;i++){
            for(int j=i+1;j<=N;j++)ans=max(ans,rui[j]-rui[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}