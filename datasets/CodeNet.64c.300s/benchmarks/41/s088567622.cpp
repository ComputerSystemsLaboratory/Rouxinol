#include<bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(int i=a; i<b; i++);
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(i, n) for(int i=0; i<=n; i++)
#define repr(i, n) for(int i=n; i>0; i--)
#define REPR(i, n) for(int i=n; i>=0; i--)
const ll INF = 1e18;
const int INT_INF = 1e9;
const ll MOD = 1e9+7;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

int H;
ll A[500010];

// 指定したノードと左右の子ノードについてmaxヒープを生成する
void max_heapify(ll *A, int i) {
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;
    if (l <= H && A[l] > A[i]) largest = l;
    if (r <= H && A[r] > A[largest]) largest = r;
    if (largest != i) {
        swap(A[i], A[largest]);
        max_heapify(A, largest);
    }
}

// 与えられた配列からmaxヒープを生成
void build_max_heap(ll *A) {
    for (int i=(H-1)/2; i>=0; i--) {
        max_heapify(A, i);
    }
}


int main() {
    cin >> H;
    rep(i, H) cin >> A[i];
    build_max_heap(A);
    for (int i=0; i<H; i++) cout << " " << A[i];
    cout << endl;
}

