#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define pi M_PI
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int main() {
    int n, m;
    while (cin >> n && n){
        int d[21][21] = {};
        REP(i,n){
            int a,b;
            cin >> a >> b;
            d[a][b] = 1;
        }
        cin >> m;
        int x = 10, y = 10;
        d[x][y] = 0;
        while (m--){
            char c;
            int a;
            cin >> c >> a;
            int dx = 0, dy = 0;
            if (c == 'E') dx = 1;
            if (c == 'W') dx = -1;
            if (c == 'N') dy = 1;
            if (c == 'S') dy = -1;
            while (a--){
                x += dx;
                y += dy;
                d[x][y] = 0;
            }
        }
        int f = 0;
        REP(i,21) REP(j,21) f += d[i][j];
        cout << (f == 0 ? "Yes" : "No") << endl;
    }


    return 0;
}