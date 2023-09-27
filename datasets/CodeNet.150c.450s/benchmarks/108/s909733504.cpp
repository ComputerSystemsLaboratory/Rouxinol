#include <iostream>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

int g[101][101],n,d[101];

int main() {
    for(int i = 0;i < 101;i++)d[i] = -1;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int u,k,v;
        cin >> u >> k;
        for(int j = 0;j < k;j++) {
            cin >> v;
            g[u][v]++;
        }
    }
    queue<int> q;
    q.push(1);
    d[1] = 0;
    while(!q.empty()) {
        int u = q.front();q.pop();
        for(int i = 1;i <= n;i++) {
            if(g[u][i] && d[i] == -1)
            {
                d[i] = d[u]+1;
                q.push(i);
            }
        }
    }
    for(int i = 1;i <=n;i++) {
        cout << i << " " << d[i] <<endl;
    }
}

