#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)


int N;
vector<int> LIS(vector<int>& v) {
    int i;
    vector<int> dp(N, 1 << 30), id(N);
    rep(i, 0, v.size()) {
        id[i] = lower_bound(dp.begin(), dp.end(), v[i]) - dp.begin();
        dp[id[i]] = v[i];
    }
    int nl = *max_element(id.begin(), id.end());
    vector<int> ret(nl + 1);
    rep(i, 0, N) if (id[N - 1 - i] == nl) ret[nl--] = v[N - 1 - i];
    return ret;
}
//-----------------------------------------------------------------------------------
int main() {
    cin >> N;

    vector<int> v;
    rep(i, 0, N) {
        int x; scanf("%d", &x);
        v.push_back(x);
    }

    auto a = LIS(v);
    cout << a.size() << endl;
}