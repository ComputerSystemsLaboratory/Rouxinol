#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n + 1); ++i)
using namespace std;
using ll = long long;
const int INF = +100100100;
// typedef pair<int,int> P;
const int  WHITE = 0;
const int GRAY =1;
const int BLACK =2;
const int NIL = -1;
const int MAX = 100;

// 配列のサイズを大きく取りすぎるとエラーが出ないが、実行できなくなる.
vector<vector<int>> M(MAX,vector<int>(MAX,INF));
vector<int> color(MAX,WHITE), P(MAX,NIL),D(MAX,INF);
int n;

void dijkstra(){
    int u = 0;
    D[u] = 0;
    while(1){
        int mini =INF;
        rep(i,n){
            if(mini>D[i] && color[i]!=BLACK){
                u = i;
                mini = D[i];
            }
        }
        if(mini==INF)break;
        color[u]=BLACK;
        rep(i,n){
            if(color[i]==BLACK)continue;
            if(D[u]+M[u][i]<D[i]){
                D[i] = D[u]+M[u][i];
            }
            color[i]=GRAY;
        }

    }
}

int main(){
    cin >> n;
    rep(i,n){
        int id, m;
        cin >> id>>m;
        rep(j,m){
            int opp;cin>>opp;
            int cost; cin >> cost;
            M[i][opp]=cost;
        }
    }
    dijkstra();
    rep(i,n){
        cout<<i << " " << D[i]<<endl;
    }
    return 0;
}
