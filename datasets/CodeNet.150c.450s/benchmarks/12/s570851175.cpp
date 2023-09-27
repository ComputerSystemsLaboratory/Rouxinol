#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int H;
    cin >> H;
    vector<int> V(H);
    for (int i = 0; i < H; i++) cin >> V[i];
    for (int i = 1; i <= H; i++) {
        cout << "node " << i << ": " << "key = " << V[i - 1] << ", ";
        if (i != 1)
            cout << "parent key = " << V[i/2 - 1] << ", ";
        if (2 * i - 1< H)
            cout << "left key = " << V[2 * i - 1] << ", ";
        if (2 * i < H)
            cout << "right key = " << V[2 * i] << ", ";
        cout << endl;
    }

    return 0;
}

