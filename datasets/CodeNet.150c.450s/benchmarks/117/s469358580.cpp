#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

int n;
vector<int> a;
int cnt = 0;

void merge(int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> l(n1 + 1), r(n2 + 1);
    rep(i, 0, n1) l[i] = a[left + i];
    rep(i, 0, n2) r[i] = a[mid + i];
    l[n1] = INF;
    r[n2] = INF;
    int i = 0;
    int j = 0;
    rep(k, left, right){
        cnt++;
        if(l[i] <= r[j]){
            a[k] = l[i];
            i = i + 1;
        }else{
            a[k] = r[j];
            j = j + 1;
        }
    }
}

void margeSort(int left, int right){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        margeSort(left, mid);
        margeSort(mid, right);
        merge(left, mid, right);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    rep(i, 0, n) cin >> a[i];
    margeSort(0, n);
    for(int ii = 0; ii < a.size(); ii++){
        if(ii) cout << ' ';
        cout << a[ii];
    }
    cout << endl;
    cout << cnt << endl;
}