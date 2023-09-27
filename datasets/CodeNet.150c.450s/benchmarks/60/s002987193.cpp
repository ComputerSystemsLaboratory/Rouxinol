#include <iostream>
#include <set>
#include <vector>
#include <utility>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

int g[101][101],n;

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
    for(int i = 1;i <= n;i++){for(int j = 1;j <n;j++)cout<<g[i][j] << " "; cout<<g[i][n] << endl;}
}

