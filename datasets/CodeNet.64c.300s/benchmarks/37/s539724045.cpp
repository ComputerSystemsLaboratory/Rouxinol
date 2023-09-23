#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    while(cin >> n, n) {

        int ans = 0;

        for(int i = 1; i < n; ++i) {
            int sum = 0;
            for(int j = i; j < n; ++j) {
                sum += j;
                if(sum == n) {
                    ++ans;
                    break;
                } else if(sum > n) {
                    break;
                }
            }
        }

        cout << ans << endl;

    }

}