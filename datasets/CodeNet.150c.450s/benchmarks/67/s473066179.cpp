#include <bits/stdc++.h>

using namespace std;

int solve(int N) {
    int ans = 0;
    for (int i = 2; i <= N; ++i) { // i???
        for (int j = 1; j <= N; ++j) { // j???????§???????
            // if ( j + (j+1) + ... + (j+i-1) == N ) {
            //     ++ans;
            // }
            int sum = (2*j+i-1)*i/2;
            if (sum == N) {
                ++ans;
            }
        }
    }
    return ans;
}

int main() {
    while (1) {
        int N; cin >> N;
        if (N == 0) {
            break;
        }
        cout << solve(N) << endl;
    }
}