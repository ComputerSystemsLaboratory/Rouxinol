#include <bits/stdc++.h>
#define INF 1e9+7
using namespace std;

#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
#define REP(i, n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define ALL(a)  (a).begin(),(a).end()
#define endl "\n"

template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
typedef long long ll;

vector<int> v;

ll cnt;
void merge(int left,int right) {
    int mid = (left+right)/2;
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> l(n1+1,INF),r(n2+1,INF);
    REP(i,n1) l[i] = v[left+i];
    REP(i,n2) r[i] = v[mid+i];
    int i = 0, j = 0;
    FOR(k,left,right) {
        if (l[i] <= r[j]) v[k] = l[i++];
        else {
            v[k] = r[j++];
            cnt += n1 - i;
        }
    }
}
void merge_sort(int left, int right) {
    if((left+1) >= right) return;
    int mid = (right-left)/2 + left;
    merge_sort(left,mid);
    merge_sort(mid,right);
    merge(left,right);
}

void solve() {
    cnt = 0;
    int n;
    cin >> n;
    v.resize(n);
    REP(i,n) cin >> v[i];
    merge_sort(0,n);
    cout << cnt << endl;
}

int main() {
    solve();
    return 0;
}
