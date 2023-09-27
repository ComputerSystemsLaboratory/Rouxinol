#include <bits/stdc++.h>
 
#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()

using namespace std;
typedef long long ll;

int main()
{
    while (1) {
        int n, m; cin >> n >> m;
        if (n == 0 && m == 0) break;
        vector<int> h(n+1), w(m+1);
        loop (n, i) cin >> h[i+1];
        loop (m, i) cin >> w[i+1];

        loop (n, i) h[i+1] += h[i];
        loop (m, i) w[i+1] += w[i];

        vector<int> H, W;
        loop (n+1, i) loop (n+1, j) {
            if (i >= j) continue;
            H.push_back(h[j] - h[i]);
        }
        loop (m+1, i) loop (m+1, j) {
            if (i >= j) continue;
            W.push_back(w[j] - w[i]);
        }
        sort(all(W));

        int ans = 0;
        for (int v : H) {
            ans += distance(lower_bound(all(W), v), upper_bound(all(W), v));
        }

        cout << ans << endl;
    }
    return 0;
}