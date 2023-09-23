#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int *r = new int[n];
    int maxv = -2000000000;
    int minv = 1000000000;

    if (n == 2) {
        cin >> r[0] >> r[1];
        maxv = r[1] - r[0];
        cout << maxv << endl;
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        cin >> r[i];
        maxv = max(maxv, r[i] - minv);
        minv = min(minv, r[i]);
    }

    cout << maxv << endl;

    delete[] r;
    return 0;
}