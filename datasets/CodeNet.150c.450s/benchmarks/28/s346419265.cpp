#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

bool deliver(int n, int k, long long W[], long long P) {
    int garbage = 0;
    for (int j = 0; j < k; j++ ) {
        long long s = 0;
        while (s + W[garbage] <= P) {
            s += W[garbage];
            garbage++;
            if (garbage == n) return true;
        }
    }
    return false;
}

int binary_search(int n, int k, long long W[]) {
    int end = n * 10000;
    int begin = 0;

    while(end - begin > 0) {
        int mid = (begin + end) / 2;
        if (deliver(n, k, W, mid)) {
            end = mid;
        } else {
            begin = mid + 1;
        }
    }
    return begin;
}

int main(void) {
    int n, k;
    long long W[100000];

    cin >> n >> k;
    for (int i = 0; i < n; i++ ) cin >> W[i];
    int ans = binary_search(n, k, W);
    cout << ans << endl;

    return 0;
}
