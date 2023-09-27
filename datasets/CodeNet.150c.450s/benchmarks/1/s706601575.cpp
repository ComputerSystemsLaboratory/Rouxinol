#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> lis;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    for (auto a: v) {
        auto it = lower_bound(lis.begin(), lis.end(), a);
        if (it != lis.end()) {
            *it = a;
        } else {
            lis.push_back(a);
        }
    }

    cout << lis.size() << endl;
}

