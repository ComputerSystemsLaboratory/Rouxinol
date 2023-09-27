//ベルマンフォード法(負の閉路の検出)
//AOJ GRL_1_B
#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,a,b) for(int i=(a); i>=(b); i--)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef pair<int,int> P;
const int INF=1<<29;

//辺についての情報を3つ持たせておく
struct edge{int from,to,cost;};
edge es[100010];//辺の隣接リスト表示
int d[10010];//各頂点への最短距離
int N,E;//Nは頂点数、Eは辺の数

//負の経路が存在するかもbool値で返す
bool bellman_ford(int s){
    //まず各頂点への最短距離をINFに初期化
    rep(i,0,N)d[i]=INF;
    //開始地点を0に設定
    d[s]=0;
    int cnt=0;
    while(1){
        cnt++;
        bool update=false;//更新があるかどうか
        rep(i,0,E){
            edge e=es[i];
            if(d[e.from]!=INF && d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;
                update=true;
            }
        }
        //N回目も更新があるなら負の経路が存在する
        if(cnt==N-1){
            return true;
        }
        //辺の更新が起こらなくなったら終わり
        if(!update)break;
    }
    return false;
}

int main(){
    int r;
    cin>>N>>E>>r;
    
    rep(i,0,E){
        int a,b,c;
        cin>>a>>b>>c;
        es[i]={a,b,c};
    }
    
    if(bellman_ford(r)){
        cout<<"NEGATIVE CYCLE"<<endl;
        return 0;
    }
    
    rep(i,0,N){
        if(d[i]==INF)cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
    }
    
    return 0;
}
