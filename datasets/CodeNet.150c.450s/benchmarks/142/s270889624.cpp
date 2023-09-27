#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifdef _LOCAL_DEBUG
#include "templates/debug.h"
#else
#define debug(...) 
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& it : a)
        cin >> it;
    for (int i = k; i < n; i++)
        cout << (a[i] > a[i - k] ? "Yes\n" : "No\n");
    return 0;
}
