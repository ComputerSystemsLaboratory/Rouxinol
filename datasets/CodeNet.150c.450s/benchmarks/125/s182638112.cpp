#include <iostream>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

int g[101][101],n,d[101],f[101];

int main() {
    cin >> n;
    for(int i = 0;i < n;i++) {
        int u,k,v;
        cin >> u >> k;
        for(int j = 0;j < k;j++) {
            cin >> v;
            g[u][v]++;
        }
    }
    stack<int> dfs;
    int time = 2;
    dfs.push(1);
    d[1] = 1;
    bool flag = true;
    while(flag) {
        while (!dfs.empty()) {
            int u = dfs.top();
            bool fl = false;
            for (int i = 1; i <= n; i++) {
                if (g[u][i] && d[i] == 0 && u != i) {
                    dfs.push(i);
                    d[i] = time++;
                    fl = true;
                    break;
                }
            }
            if (!fl) {
                dfs.pop();
                f[u] = time++;
            }
        }
        flag = false;
        for(int i =1;i <= n;i++) if(d[i] == 0){flag = true;dfs.push(i);d[i] = time++;break;}
    }
    for(int i = 1;i <=n;i++) {
        cout << i << " " << d[i] << " " << f[i] <<endl;
    }
}

