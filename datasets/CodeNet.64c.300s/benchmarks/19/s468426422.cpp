#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    while(cin >> n, n) {

        int num[n], sum, maxSum = -100000;

        for(int i = 0; i < n; ++i) {
            cin >> num[i];
        }

        for(int i = 0; i < n; ++i) {
            sum = 0;
            for(int j = i; j < n; ++j) {
                sum += num[j];
                maxSum = max(maxSum, sum);
            }
        }

        cout << maxSum << endl;

    }

}