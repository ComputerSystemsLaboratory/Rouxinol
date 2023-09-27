#include "bits/stdc++.h"
using namespace std;

int main() {
        int i, j;
        int n;
        while (cin >> n) {
                if (n == 0) break;
                int sum = 0;
                vector<int> a(n);
                for (i = 0; i < n; i ++) {
                        cin >> a[i];
                        sum += a[i];
                }
                sort(a.begin(), a.end());
                sum -= a.front();
                sum -= a.back();
                cout << sum / (n - 2) << endl;
        }
        return 0;
}