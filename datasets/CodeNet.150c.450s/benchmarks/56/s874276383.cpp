#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long max_v, min_v, sum_v;
    cin >> n;
    vector<long long> v(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    min_v = *min_element(v.begin(), v.end());
    max_v = *max_element(v.begin(), v.end());
    sum_v = accumulate(v.begin(), v.end(), 0LL);
    
    cout << min_v << " " << max_v << " " << sum_v << endl;
    return 0;
}
