#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
#define REP(i, n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define ALL(a)  (a).begin(),(a).end()
#define endl "\n"

template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
typedef long long ll;

vector<pair<char,int>> vp;
vector<pair<char,int>> vp2;

void merge(int left,int right) {
    int mid = (left+right)/2;
    int n1 = mid - left;
    int n2 = right - mid;
    vector<pair<char,int>> l(n1+1,pair<char,int>('x',INF)),r(n2+1,pair<char,int>('x',INF));
    REP(i,n1) l[i] = vp2[left+i];
    REP(i,n2) r[i] = vp2[mid+i];
    int i = 0, j = 0;
    FOR(k,left,right) {
        if (l[i].second <= r[j].second) vp2[k] = l[i++];
        else vp2[k] = r[j++];
    }
}
void merge_sort(int left, int right) {
    if((left+1) >= right) return;
    int mid = (right-left)/2 + left;
    merge_sort(left,mid);
    merge_sort(mid,right);
    merge(left,right);
}

int partition(int p,int r) {
    auto x = vp[r].second;
    auto i = p - 1;
    FOR(j,p,r) {
        if (vp[j].second <= x) {
            i++;
            iter_swap(vp.begin()+i,vp.begin()+j);
        }
    }
    iter_swap(vp.begin()+i+1,vp.begin()+r);
    return i+1;
}

void quick_sort(int p,int r) {
    if (p < r) {
        auto q = partition(p,r);
        quick_sort(p,q-1);
        quick_sort(q+1,r);
    }
}


void solve() {
    int n;
    cin >> n;
    vp.resize(n);
    vp2.resize(n);

    REP(i,n) {
        char c; int v;
        cin >> c >> v;
        vp[i] = make_pair(c,v);
        vp2[i] = make_pair(c,v);
    }

    quick_sort(0,n-1);
    merge_sort(0,n);
    bool is_stable = true;
    REP(i,n) {
        if(vp[i].first != vp2[i].first) {
            is_stable = false;
            break;
        }
    }

    cout << ((is_stable) ? "Stable" : "Not stable") << endl;
    for(const auto &p : vp) {
        cout << p.first << " " << p.second << endl;
    }
}

int main() {
    solve();
    return 0;
}
