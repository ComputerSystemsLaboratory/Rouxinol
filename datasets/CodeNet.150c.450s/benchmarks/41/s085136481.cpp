#include<bits/stdc++.h>
using namespace std;
#define int long long
int N,M;

int dist[100][100];
const int INF=LLONG_MAX/1000;
signed main(){
    fill_n(*dist,10000,INF);

    cin>>N>>M;
    for(int i=0;i<N;i++)dist[i][i]=0;
    for(int i=0;i<M;i++){
        int a,b,c;
        cin>>a>>b>>c;
        dist[a][b]=c;
    }

    for(int k=0;k<N;k++)
    for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);

    for(int i=0;i<N;i++){
        if(dist[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<(j?" ":"");
            if(dist[i][j]>(1e9)*2)cout<<"INF";
            else cout<<dist[i][j];
        }
        cout<<endl;
    }
    return 0;
}