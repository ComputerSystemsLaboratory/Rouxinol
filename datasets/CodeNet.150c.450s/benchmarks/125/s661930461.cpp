#include<iostream>
using namespace std;
int N,t=0;
int d[101][101],Ts[101],Te[101];
bool visit[101];
void graph(){
    int u,k,a;
    for(int i=1;i<=N;++i){
        cin>>u>>k;
        for(int j=0;j<k;++j){
            cin>>a;
            d[u][a]=1;
        }
        visit[i]=true;
    }
}
void dfs(int cur){
    t+=1;
    Ts[cur]=t;
    visit[cur]=false;
    for(int i=1;i<=N;++i){
        if(d[cur][i]==1&&visit[i]){
            dfs(i);
        }
    }
    t+=1;
    Te[cur]=t;
}
int main(){
    cin>>N;
    graph();
    for(int i=1;i<=N;++i){
        if(visit[i]) {
            dfs(i);
        }
    }
    for(int i=1;i<=N;++i){
        cout<<i<<" "<<Ts[i]<<" "<<Te[i]<<endl;
    }
}