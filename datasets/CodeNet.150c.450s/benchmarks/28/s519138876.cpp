#include <bits/stdc++.h>
using namespace std;

#define M (1 << 24)

int func(int P, int n, int k, int w[]) {
    int P_tmp = 0, k_tmp = 0;
    for(int i = 0; i < n; i++) {
        if(w[i] > P) return 0;
        if(P_tmp + w[i] > P) {
            k_tmp++;
            if(k_tmp == k) return 0;
            P_tmp = w[i];
        } else {
            P_tmp += w[i];
        }
    }
    return 1;
}

int main() {
    int n, k, w[100010];
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> w[i];
    }

    int left = 1, right = 2000000000, P;

    while(left < right) {
        int mid = (left + right) / 2;

        if(func(mid, n, k, w) == 1) {
            right = mid;
        } else {
            left = mid + 1;
        }
        if(func(left, n, k, w) == 1) {
            P = left;
            break;
        }
    }
    cout << P << endl;
    return 0;
}
