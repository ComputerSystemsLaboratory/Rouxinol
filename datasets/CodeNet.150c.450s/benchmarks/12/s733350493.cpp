#include <bits/stdc++.h>
#define rep(i, n) for(i = 0; i < n; i++)
using namespace std;

int main() {
    int h;
    cin >> h;
    vector<int> a(h+1);
    for (int i=1; i<=h; i++)
        cin >> a[i];

    for (int i=1; i<=h; i++) {
        cout << "node " << i << ": ";
        cout << "key = " << a[i] << ", ";
        if (i != 1) {
            cout << "parent key = " << a[i/2] << ", ";
        }
        if (i * 2 <= h) {
            cout << "left key = " << a[i*2] << ", ";
        }
        if (i * 2 + 1 <= h) {
            cout << "right key = " << a[i*2+1] << ", ";
        }
        cout << endl;
    }

    return 0;
}

