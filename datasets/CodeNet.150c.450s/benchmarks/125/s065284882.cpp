#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
static const int N=105;
int M[N+1][N+1];
void graph(int n){
    for(int i=1;i<=n;i++)M[0][i]=1;
    for(int i=1;i<=n;i++){
        int garbage;cin>>garbage;
        int k;cin>>k;
        for(int j=1;j<=k;j++){
            int l;cin>>l;
            M[i][l]=1;
        }
    }
}
int d[N],f[N],t=0,n;
stack <int>S;
void dfs(){
    S.push(0);
    while(S.empty()!=true){
        int flag=0,i=1;
        while(flag==0 && i<=n){
            if(M[S.top()][i]==0){
                i++;
            }else{
                    flag++;
                for(int z=0;z<=n;z++) M[z][i]=0;
            }
        }
        t++;
        if(i>=n+1){
            f[S.top()]=t;
            S.pop();
        }else{
            S.push(i);
            d[i]=t;
        }
    }
}

int main(){
    cin>>n;
    graph(n);
    dfs();
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
    }
    
    return 0;
}