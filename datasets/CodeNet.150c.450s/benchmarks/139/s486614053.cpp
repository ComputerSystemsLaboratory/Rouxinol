#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <tuple>
#include <cstring>
#include <functional>
using namespace std;
typedef long long ll;
typedef pair<long long, long long> P;
#define rep(i, n) for(long long i=0; i<n; i++)
#define reps(i, s, e) for(long long i=s; i<e; i++)
#define repr(i, n) for(long long i=n-1; i>=0; i--)
#define reprs(i, s, e) for(long long i=e-1; i>=s; i--)

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m; cin >> n >> m;
    ll a[m], b[m];
    rep(i, m){
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }

    vector<ll> g[n];
    rep(i, m){
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    ll signal[n];
    memset(signal, -1, sizeof(signal));

    queue<ll> que;
    que.push(0);

    while(!que.empty()){
        ll p_now = que.front();
        que.pop();

        for(ll p_nxt : g[p_now]){
            if(signal[p_nxt] != -1) continue;

            signal[p_nxt] = p_now;
            que.push(p_nxt);
        }
    }

    cout << "Yes" << endl;
    reps(i, 1, n){
        cout << signal[i] + 1 << endl;
    }

    return 0;
}