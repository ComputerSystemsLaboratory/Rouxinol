#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define  all(x) (x).begin(),(x).end()
typedef long long ll;

vector<int> g[105];
vector<int> d(105, -1);

int main(){
    int n;
    cin >> n;
    rep(i,n){
        int u, k, v;
        cin >> u >> k;
        rep(j, k){
            cin >> v;
            g[u].push_back(v);
        }
    }
    queue<int> q;
    q.push(1);
    d[1] = 0;
    while(!q.empty()){
        int x = q.front(); 
        q.pop();
        for(int v : g[x]){
            if (d[v] != -1) continue;
            q.push(v);
            d[v] = d[x]+1;
        }
    }
    for(int i = 1; i <= n; i++){
        printf("%d %d\n", i, d[i]);
    }
    return 0;
}
