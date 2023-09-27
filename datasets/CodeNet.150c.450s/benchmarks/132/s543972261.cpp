#include<iostream>

using namespace std;

int main() {
    while(1) {
        int n, p;
        cin >> n >> p;
        if (n * p == 0) break;

        int cnt[n];
        for (int i = 0; i < n; ++i) {
            cnt[i] = 0;
        }
        int wan = p;
        int i = 0;
        while(1) {
            if (wan > 0) {
                wan--;
                cnt[i]++;
                if (cnt[i] == p) {
                    cout << i << endl;
                    break;
                }
            } else {
                wan = cnt[i];
                cnt[i] = 0;
            }
            i = (i + 1) % n;
        }
    }
}