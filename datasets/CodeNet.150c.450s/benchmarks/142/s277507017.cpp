#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &elem : a) cin >> elem;
    for (int i = k; i < n; i++) {
        if (a[i] > a[i - k]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}