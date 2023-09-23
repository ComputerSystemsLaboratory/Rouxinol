#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
    int x=0,y=0,p=0,f[30][30]={0},j[30][30]={0};
    cin>>x>>y;
    if(x==y && x==0)break;
    cin>>p;
    for(int i=0;i<p;i++){
        int a,b;
        cin>>a>>b;
        j[a][b]=-1;
    }
    f[1][1]=1;
    for(int i=1;i<=x;++i){
        for(int k=1;k<=y;++k){
            f[i][k]+=f[i-1][k]+f[i][k-1];
        if(j[i][k]==-1)f[i][k]=0;
        }
    }
    cout<<f[x][y]<<endl;

    }
    return 0;
}