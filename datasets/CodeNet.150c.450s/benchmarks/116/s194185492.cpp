#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
using ll = long long;
const int INF = 999999999;

int main() {
    int n, k;
    while(cin >> n >> k) {
        if(n == 0) break;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> cs(n+1, 0);
        for(int i = 1; i < n+1; i++) {
            cs[i] = cs[i-1];
            cs[i] += a[i-1];
        }

        int ans = (-1) * INF;
        for(int i = 0; i < n+1-k; i++) {
            ans = max(ans, cs[i+k] - cs[i]);
        }
        cout << ans << endl;
    }

}
