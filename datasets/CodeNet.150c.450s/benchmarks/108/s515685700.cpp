#include<iostream>
#include<queue>
using namespace std;
int N;
int D[101],d[101][101];
void bfs(int src){
    int u,k,a;
    bool visit[101];
    for(int i=1;i<=N;++i){
        cin>>u>>k;
        for(int j=0;j<k;++j){
            cin>>a;
            d[u][a]=1;
        }
        visit[i]=true;
    }
    queue<int>Q;
    Q.push(src);
    D[src]=0;
    visit[src]=false;
    while(!Q.empty()){
        int cur=Q.front();
        Q.pop();
        for(int i=1;i<=N;++i){
            if(d[cur][i]==1&&visit[i]){
                visit[cur]=false;
                visit[i]=false;
                D[i]=D[cur]+1;
                Q.push(i);
            }
        }
    }
    for(int i=1;i<=N;++i){
        if(i!=1&&D[i]==0){
            D[i]=-1;
        }
        cout<<i<<" "<<D[i]<<endl;
    }
}
int main(){
    cin>>N;
    int start=1;
    bfs(start);
}