#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int H,W;
int fie[10][10000];
int logg[10];
int ans=0;
void func(int D){
    if(D==H){
        int karians=0;
        for(int i=0;i<W;i++){
            int a=0,b=0;
            for(int j=0;j<H;j++){
                if(logg[j]==fie[j][i])a++;
                else b++;
            }
            karians+=max(a,b);
        }
        ans=max(karians,ans);
    }
    else{
        logg[D]=0,func(D+1);
        logg[D]=1,func(D+1);
    }
}
int main(){
    while(1){
        ans=0;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++)fie[i][j]=-1;
        }
        cin>>H>>W;
        if(H==0&&W==0)break;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++)cin>>fie[i][j];
        }
        func(0);
        cout<<ans<<endl;
    }
    return 0;
}