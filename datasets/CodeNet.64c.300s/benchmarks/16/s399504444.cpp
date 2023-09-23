#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int r[n];

    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    int _max = r[1] - r[0];
    int _min = pow(10, 9);

    for (int i = 1; i < n; i++) {
        _min = min(_min, r[i - 1]);
        _max = max(_max, r[i] - _min);
    }

    cout << _max << endl;

    return 0;
}

