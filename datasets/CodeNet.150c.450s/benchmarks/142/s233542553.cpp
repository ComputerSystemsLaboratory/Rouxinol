#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);

    for (int &x: v)
        cin >> x;

    
    for (int i = k, p = 0; i < n; ++i, p++) {
        if(v[p] < v[i]) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
