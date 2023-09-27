// #define _GLIBCXX_DEBUG // for STL debug (optional)
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
using namespace std;
using ll = long long int;
using int64 = long long int;
 
template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
const int INF = 1001001001;
const ll LONGINF = 1001001001001001LL;
const ll MOD = 1000000007LL;

bool is_bigger(int x, int y, int h, int w) {
    int ar = x*x + y*y;
    int br = h*h + w*w;
    if(ar != br) return ar > br;
    return x > h;
}

void solve(int H, int W) {
    int ax = 300, ay = 300;
    for(int x=1; x<=150; x++) {
        for(int y=x+1; y<=150; y++) {
            if(is_bigger(x, y, H, W)) {
                if(is_bigger(ax, ay, x, y)) {
                    ax = x;
                    ay = y;
                }
            }
        }
    }
    cout << ax << " " << ay << endl;
}

int main() {
    int H, W;
    while(cin >> H >> W, H || W) solve(H, W);
    return 0;
}

