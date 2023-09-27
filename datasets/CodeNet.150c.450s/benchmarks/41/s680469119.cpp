#include<iostream>
#include<vector>
using namespace std;
#define INF 1000000000000000000
#define MAXE 9900
#define MAXV 100
#define ll long long

int V,E;
struct edge{
    int from,to;
    ll cost;
};
ll d[MAXV][MAXV];
int main(){
    cin>>V>>E;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            d[i][j]=INF;
            if(i==j) d[i][j]=0;
        }
    }
    for(int i=0;i<E;i++){
        int s,t,cost;
        cin>>s>>t>>cost;
        d[s][t]=cost;
    }
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(d[i][k]!=INF&&d[k][j]!=INF){
                    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }
    }
    for(int i=0;i<V;i++){
        if(d[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(d[i][j]==INF) cout<<"INF";
            else cout<<d[i][j];
            cout<<((j==V-1)?'\n':' ');
        }
    }
    return 0;
}
