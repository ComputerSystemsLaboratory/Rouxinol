#include<iostream>
using namespace std;

int d[101]={0};
int f[101]={0};
int AdjM[101][101]={0};
int lapse=0;

void dfs(int cur){
    ++lapse;
    d[cur]=lapse;
    //cerr<<"visiting "<<cur<<" "<<lapse<<"\n";
    for(int dst=1;dst<101;++dst){
        if(AdjM[cur][dst]!=0 && d[dst]==0){
            dfs(dst);
        }
    }
    ++lapse;
    f[cur]=lapse;
}

int main(){
    int N;
    cin>>N;
    int id,edgnum,adj;
    for(int i=0;i<N;++i){
        cin>>id>>edgnum;
        for(int j=0;j<edgnum;++j){
            cin>>adj;
            AdjM[id][adj]+=1;
        }
    }

    for(int i=1;i<=N;++i){
        if(d[i]==0){
            dfs(i);
        }
    }

    for(int i=1;i<=N;++i){
        cout<<i<<" "<<d[i]<<" "<<f[i]<<"\n";
    }
}