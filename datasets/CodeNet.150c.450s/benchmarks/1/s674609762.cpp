#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 2000000000;

int solve(vector<int>& a) {
    vector<int> dp(a.size(), INF);
    for (int i = 0; i < a.size(); i++) {
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
    }
   return distance(dp.begin(), lower_bound(dp.begin(), dp.end(), INF));
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = solve(a);
    
    cout << ans << endl;
    return 0;
}