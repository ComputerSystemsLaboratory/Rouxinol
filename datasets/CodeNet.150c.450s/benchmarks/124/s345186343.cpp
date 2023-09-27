#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
  
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
  
using namespace std;
  
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
  
const int INF=1<<29;
const double EPS=1e-9;
  
const int dx[]={1,0,-1,0,1,1,-1,-1},dy[]={0,-1,0,1,1,-1,-1,1};



int main() {
    int N;
    cin >> N;
    std::vector<vector<int> > G(N, vector<int>(N, 100000000));
    for (int i = 0; i < N; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c;
            cin >> v >> c;
            G[u][v] = c;
        }
    }

    for (int i = 0; i < N; i++) {
        G[i][i] = 0;
    }

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                G[i][j] = std::min(G[i][j], G[i][k] + G[k][j]);
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << i << " " << G[0][i] << endl;
    }
    return 0;
}