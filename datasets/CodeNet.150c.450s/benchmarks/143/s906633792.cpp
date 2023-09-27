#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define pb push_back
#define vi vector<int>

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    map<int,int> mp;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        sum += a[i];
    }

    int q;
    cin >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        int z = mp[x];
        sum += (y - x) * z;
        mp[x] = 0;
        mp[y] += z;
        cout << sum << endl;
    }


    return 0;
}

    