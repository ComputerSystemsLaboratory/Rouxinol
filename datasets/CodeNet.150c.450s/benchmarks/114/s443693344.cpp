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


int prim(){
    int s = 0;
    int u;
    D[0]=0;
    while(1){
        int d_min = INF;
        // 線の内、始点を選ぶ
        rep(i,n){
            if(color[i]!=BLACK && D[i]<d_min){
                d_min = D[i];
                u=i;
            }
        }
        
        if(d_min==INF)break;
        color[u]=BLACK;
        // 終点を選ぶかつ、選び終えたら、Dへ最小値を保存
        rep(v,n){
            if(M[u][v]!=INF && color[v]!=BLACK){
                if(M[u][v]<D[v]){
                    D[v]=M[u][v];
                    P[v]=u;
                    color[v]=GRAY;
                    
                }
            }
        }        
    }
    int sum=0;
    rep(i,n){
        if(P[i]!=NIL)sum+=M[i][P[i]];
    }
    return sum;
}

int main(){
    cin >> n; 
    rep(i,n){
        
        rep(j,n){
          int x;
          cin >> x;
          if(x==-1)x=INF;
          M[i][j]=x;  
          
        }
    }
    printf("%d\n",prim());
    return 0;
}
