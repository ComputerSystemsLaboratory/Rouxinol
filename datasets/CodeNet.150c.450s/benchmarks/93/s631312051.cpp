#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, char> P;
const int mod = 1000000007;
const int INF = 1e12;

int n;
vector<P> a;

int partition(int p, int r){
    int x = a[r].first;
    int i = p - 1;
    rep(j, p, r){
        if(a[j].first <= x){
            i = i + 1;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}

void quicksoert(int p, int r){
    if(p < r){
        int q = partition(p, r);
        quicksoert(p, q - 1);
        quicksoert(q + 1, r);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    map<int, vector<char> > mp;
    map<int, int> id;    
    rep(i, 0, n){
        cin >> a[i].second >> a[i].first;
        mp[a[i].first].push_back(a[i].second);
    }
    quicksoert(0, n - 1);
    bool f = true;
    rep(i, 0, n){
        if(a[i].second != mp[a[i].first][id[a[i].first]]) f = false;
        else id[a[i].first]++;
    }
    if(f) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    rep(i, 0, n){
        cout << a[i].second << " " << a[i].first << endl;
    }
}