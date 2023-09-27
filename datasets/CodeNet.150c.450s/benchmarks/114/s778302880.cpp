#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)

#define SENTINEL 2000000000
#define NIL -1
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
static const int MAX = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;
static const int INFTY = (1<<21);

int n,M[MAX][MAX];

//primのアルゴリズム
int prim(){
    int color[MAX],d[MAX],p[MAX];
    int minv;
    for (int u = 0; u < n; u++)
    {
        color[u] = WHITE;
        d[u] = INFTY;
        p[u] = -1;
    }
    d[0]=0; 
    while(1){
        minv = INFTY;
        int u= -1;
        for (int i = 0; i < n; i++)
        {
            if(color[i]!=BLACK&&d[i]<minv){
                minv = d[i];
                u = i;
            }
        }
        if (u == -1)break;
        color[u] = BLACK;
        for (int v = 0; v < n; v++)
        {
            if(color[v]!=BLACK&&M[u][v]!=INFTY){
                if(M[u][v]<d[v]){
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
            
        }  
    }
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        if(p[i]!=-1){
            sum += M[i][p[i]];
        }
    }
    return sum;
}

int main(){
    cin >> n;
    REP(i,n){REP(j,n){
        int e;
        cin >> e;
        M[i][j] = (e ==-1)?INFTY:e;    
        }
    }
    cout << prim() << endl;

    return 0;
}
