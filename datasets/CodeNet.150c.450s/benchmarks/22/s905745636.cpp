#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
typedef long long lli;
typedef vector<lli> vll;
typedef vector<bool> vbl;
typedef vector<vector<lli> > mat;
typedef vector<vector<bool> > matb;
typedef vector<string> vst;
typedef pair<lli,lli> pll;
typedef pair<double,double> pdd;

lli n,m,r;

struct edge {
    lli from,to;
    lli cost;
};
vector<edge> e;
vll ans;
bool updt;
lli k = 0;

const lli INF = 10000001;

int main(){
    cin >> n >> m >> r;
    e = vector<edge> (m);
    for(lli i = 0;i < m;i++) cin >> e[i].from >> e[i].to >> e[i].cost;
    ans = vll(n,INF);
    ans[r] = 0;
    for(;;){
        updt = false;
        for(lli i = 0;i < m;i++){
            if(ans[e[i].from] != INF && ans[e[i].to] > ans[e[i].from] + e[i].cost){
                updt = true;
                ans[e[i].to] = ans[e[i].from] + e[i].cost;
            }
        }
        k++;
        if(k > n){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
        if(!updt) break;
    }
    for(lli i = 0;i < n;i++) if(ans[i] == INF) cout << "INF" << endl;
    else cout << ans[i] << endl;
    return 0;

}