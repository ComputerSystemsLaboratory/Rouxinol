#include <bits/stdc++.h>
using namespace std;

int cnt[10010];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        ++cnt[a];
    }
    int fir = 1;
    for (int i = 0; i < 10010; ++i) {
        for (int j = 0; j < cnt[i]; ++j) {
            if (!fir)
                cout << " ";

            cout << i;
            fir = 0;
        }
    }
    cout << "\n";

    return 0;
}