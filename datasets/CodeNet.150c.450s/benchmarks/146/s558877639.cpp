#pragma GCC optimize("O3")
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

using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;

template <class T> inline T chmax(T &a, const T b) {return a = (a < b) ? b : a;}
template <class T> inline T chmin(T &a, const T b) {return a = (a > b) ? b : a;}

constexpr int MOD = 1e9 + 7;
constexpr int inf = 1e9;
constexpr long long INF = 1e18;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

typedef complex<double> Point, Vector;

#define X real()
#define Y imag()
#define EPS (1e-10)
#define equals(a, b) (fabs((a) - (b)) < EPS)

double cross(Vector a, Vector b){
    return a.X * b.Y - a.Y * b.X;
}

// 平行判定
bool isParallel(Vector a, Vector b){
    return equals(cross(a, b), 0);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin>>n;
    while(n--){
        double x1, y1, x2, y2, x3, y3, x4, y4; cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        Vector v1 = Point(x1, y1) - Point(x2, y2), v2 = Point(x3, y3) - Point(x4, y4);
        cout << (isParallel(v1, v2) ? "YES" : "NO") << endl;
    }

    return 0;
}
