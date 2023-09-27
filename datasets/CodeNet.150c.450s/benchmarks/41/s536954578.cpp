#include <cstdio>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <random>
#include <climits>
#include <set>
#include <deque>
#include <queue>
#include <bitset>
#include <stack>

#define mod 1000000007
#define INF 9999999999
#define rep(i,n) for(int (i)=0; (i)<(n); (i)++)
#define P pair<int, int>

using namespace std;
using ll = long long;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int dx2[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy2[] = {0, -1, -1, -1, 0, 1, 1, 1};

struct edge {int from, to, cost; };

int v, e;
ll s[10000], t[10000], c[10000];
ll d[105][105];

void warshall_floyd_init(){
    rep(i, v){
        rep(j, v){
            if(i != j){
                d[i][j] = INF;
            }else{
                d[i][j] = 0;
            }
        } 
    }
}

void warshall_floyd(){
    rep(k, v)
        rep(i, v)
            rep(j, v)
                if(d[i][k] != INF && d[k][j] != INF)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

bool isNegativeCycle(){
    rep(i, v){
        if(d[i][i] < 0) return true;
    }
    return false;
}

void solve(){
    scanf("%d%d", &v, &e);
    warshall_floyd_init();
    rep(i, e) scanf("%lld%lld%lld", &s[i], &t[i], &c[i]);
    rep(i, e) d[s[i]][t[i]] = c[i];
    warshall_floyd();
    if(isNegativeCycle()){
        printf("NEGATIVE CYCLE\n");
        return;
    }
    rep(i, v){
        rep(j, v){
            if(d[i][j] == INF) printf("INF");
            else printf("%lld", d[i][j]);
            if(j != v-1) printf(" ");
        }
        printf("\n");
    }
}

int main(){
    solve();
    return 0;
}

