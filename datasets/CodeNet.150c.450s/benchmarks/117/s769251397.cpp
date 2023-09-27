// ?????¬???????????¬??????

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
#include <functional>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long int

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

int comparecnt = 0;

void mergesort(vector<int> &v, int s, int t) {
    if(t - s == 1) return;
    int mid = (s + t) / 2;
    mergesort(v, s, mid);
    mergesort(v, mid, t);
    vector<int> vl, vr;
    rep(i,s,mid) vl.push_back(v[i]);
    rep(i,mid,t) vr.push_back(v[i]);

    int N = mid - s, M = t - mid;
    int cl = 0, cr = 0, cur = s;
    while(cur < t) {
        comparecnt++;
        if(cl == N)    v[cur] = vr[cr++];
        else if(cr == M) v[cur] = vl[cl++];
        else {
            if(vl[cl] < vr[cr]) v[cur] = vl[cl++];
            else                v[cur] = vr[cr++];
        }
        cur++;
    }
}

signed main() {
    int N; cin >> N;
    vector<int> v(N);
    rep(i,0,N) cin >> v[i];

    mergesort(v, 0, N);
    rep(i,0,N) cout << v[i] << (i != N-1 ? " " : "");
    cout << endl << comparecnt << endl;
    return 0;
}