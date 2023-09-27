#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << #x << ": " << x << endl;
#define ll long long

int main() {
    vector<int> ans;
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;

        vector<int> v(n);
        for (int &x : v) cin >>x;

        for (int i = 1; i < n; i++) {
            v[i] = v[i] + v[i-1];
        }

        int Max = v[0];    
        int a = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                Max = max(Max, v[j] - a);
            }
            a = v[i];
        }

        ans.push_back(Max);
    }

    for (int x : ans) {
        cout << x << endl;
    }

    return 0;
}