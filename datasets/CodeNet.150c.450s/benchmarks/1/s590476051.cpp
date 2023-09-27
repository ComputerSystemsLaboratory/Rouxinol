#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n);++i)
using namespace std;
template <class _t> inline bool chmax (_t& a,_t b){if(a<b){a=b;return true;}return false;} template <class _t> inline bool chmin (_t& a,_t b){if(a>b){a=b;return true;}return false;}

const int INF = 2147483647;
const long long inf = 1ll << 60;
const long long mod = 1000000007;

int dx[4] = {1,0,-1,0};int dy[4] = {0,-1,0,1};
int main() {
    int n;cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<int> dp(n,INF);
    for(int i=0;i<n;i++){
	vector<int>::iterator itr = lower_bound(dp.begin(),dp.end(),a[i]);
	*itr = a[i];
    }

    int ans = lower_bound(dp.begin(),dp.end(),INF)-dp.begin();
    cout << ans << endl;
    return 0;
}

