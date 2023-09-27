#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 1e9 + 10;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)cin >> a[i];
    vector<int> dp(n + 1, INF);

    for(int i = 0; i < n; i++) {
        auto itr = lower_bound(dp.begin(), dp.end(), a[i]);
        *itr = a[i];
    }
    cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << endl;
}
