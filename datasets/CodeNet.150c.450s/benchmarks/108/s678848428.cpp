#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
using namespace std;
typedef vector<int> vint;
typedef vector<long long> vll;
typedef pair<int,int> pint;
typedef long long ll;
#define range(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) range(i,0,n)
#define INF 10000000000 //10^10
#define PI 3.141592
#define pb push_back

int main(){
    //内部処理は0indexで行う

    //入力
    int n;
    cin >> n;
    vector<vint> adj(n);
    rep(i,n){
        int u,k;
        cin >> u >> k;
        rep(j,k){
            int v;
            cin >> v;
            adj[u-1].pb(v-1);
        }
    }

    //計算
    vint d(n,-1);
    d[0]=0;
    queue<int> Q;
    Q.push(0);
    while(!Q.empty()){
        int cur=Q.front(); Q.pop();
        rep(i,adj[cur].size()){
            int dst=adj[cur][i];
            if(d[dst]==-1){
                d[dst]=d[cur]+1;
                Q.push(dst);
            }
        }
    }

    //出力
    rep(i,n){
        cout << i+1 << ' ' << d[i] << endl;
    }
}

