#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int r[n];

    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }


    int min = std::min(r[0], r[1]);
    int max = r[1] - r[0];

    for (int i = 2; i < n; i++) {
        max = std::max(max, r[i] - min);
        min = std::min(min, r[i]);
    }

    cout << max << endl;

    return 0;
}
