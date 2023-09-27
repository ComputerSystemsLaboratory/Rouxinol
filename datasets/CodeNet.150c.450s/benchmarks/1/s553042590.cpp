#include <bits/stdc++.h>
using namespace std;

template <typename T> int LIS(const vector<T> &a) {
    vector<T> dp(a.size(), numeric_limits<T>::max());
    for (int i = 0; i < (int)a.size(); ++i) {
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
    }
    return lower_bound(dp.begin(), dp.end(), numeric_limits<T>::max()) - dp.begin();
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << LIS(a) << endl;
}
