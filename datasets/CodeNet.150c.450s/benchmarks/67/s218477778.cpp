#include "bits/stdc++.h"
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i ++) 

int main() {
        int n;
        while (cin >> n && n) {
                int ans = 0;
                for (int i = 1; i < n; i ++) {
                        int sum = 0;
                        for (int j = i; j < n; j ++) {
                                sum += j;
                                if (sum >= n) {
                                        if (sum == n) ans ++;
                                        break;
                                }
                        }
                }
                cout << ans << endl;
        }
        return 0;
}