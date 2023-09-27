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

bool ok(std::vector<vector<int> > &map, int x, int y) {
    int H = map.size();
    int W = map[0].size();
    if (x < 0 || x >= W || y < 0 || y >= H) return false;
    return true;
}

void color(std::vector<vector<int> > &map, int i, int j) {
    if (map[i][j] == -1) return;
    map[i][j] = -1;

    for (int k = 0; k < 8; k++) {
        int px = j + dx[k];
        int py = i + dy[k];
        if (!ok(map, px, py)) continue;
        if (map[py][px] == 0) continue;
        if (map[py][px] == 1) {
            color(map, py, px);
        }
    }
}

int main(int argc, char const *argv[]) {
    int W, H;
    while(cin >> W >> H) {
        if (W == 0 && H == 0) break;
        std::vector<vector<int> > map(H, vector<int>(W, 0));
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> map[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (map[i][j] == 1) {
                    count++;
                    color(map, i, j);
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}