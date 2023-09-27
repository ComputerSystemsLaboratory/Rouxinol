#include<bits/stdc++.h>

#define rep(i,N) for(int i=0;i<N;i++)
#define rep2(i,N) for(int i=1;i<=N;i++)
using namespace std;
long long  INF=1e18;
long long mod=1e9+7;
long long edge[110][110];
long long dist[105][105];

//status unsloved




int main(){


    int V,E;
    cin>>V>>E;
    rep(i,V)rep(k,V)edge[i][k]=INF;

    rep(i,E){
        int s,t;
        long long d;
        cin>>s>>t>>d;
        edge[s][t]=d;
    }
    //ワーシャルフロイド 法
        //中継点を通って最短経路を構築する
    rep(l,3){
        rep(i,V){
            rep(j,V){
                rep(k,V){
                    if(edge[i][j]!=INF && edge[j][k]!=INF){
                    edge[i][k]=min(edge[i][k],edge[i][j]+edge[j][k]);
                    }
                }
            }
        }
    }
    //負の閉路の検出
    rep(i,V){
        if(edge[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;;
            return 0;
        }
    }

    rep(i,V){
        rep(k,V){
            if(i==k){
                cout<<"0";
            }
            else if(edge[i][k]==INF)cout<<"INF";

            else{
            cout<<edge[i][k];
            }
            if(k!=V-1)cout<<" ";
            else cout<<endl;
        }
        //if(i!=V-1)cout<<endl;
    }
    

    return 0;

}
/*
0 1 3 4 
INF 0 2 3 
INF INF 0 1 
INF INF 7 0 

0 1 3 4
INF 0 2 3
INF INF 0 1
INF INF 7 0
*/

