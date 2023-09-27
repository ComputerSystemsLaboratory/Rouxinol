#include <iostream>
using namespace std;

int G[105][105]={};
int d[105]={},f[105]={};
int N,T=0;

void Gprint(int n){
    cout<<"\\|";
    for(int i=0; i<n; i++)cout<<i+1;
    cout<<endl;
    for(int i=0; i<n+2; i++)cout<<"-";
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<i+1<<"|";
        for(int j=0; j<n; j++){
            cout<<G[i][j];
        }
        cout<<endl;
    }
}

void dfs(int n){
    if(d[n])return;
    d[n]=++T;
    for(int i=0; i<N; i++){
        if(G[n][i])dfs(i);
    }
    f[n]=++T;
}

int main(){
    int u,k,v;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>u>>k;
        for(int j=0; j<k; j++){
            cin>>v;
            G[u-1][v-1]=1;
        }
    }

//    Gprint(N);

    for(int i=0; i<N; i++)
        dfs(i);

    for(int i=0; i<N; i++){
        cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;
    }
}