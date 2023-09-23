#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    cin.tie(0);
    int n;
    cin >> n;
    int y[n];
    int m[n];
    int d[n];

    for (int i = 0; i < n; i++) {
        cin >> y[i] >> m[i] >> d[i];
    }
    long now;
    now = 999 * 195 + 999 / 3 * 5 + 1;
    long days[n];
    for (int i = 0; i < n; i++) {
        int uruudosi = (y[i] - 1) / 3;
        days[i]      = (y[i] - 1) * 195 + uruudosi * 5;
        if (y[i] % 3 != 0) {
            days[i] += (m[i] - 1) * 20 - (m[i] - 1) / 2 + d[i];
        } else {
            days[i] += (m[i] - 1) * 20 + d[i];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << now - days[i] << endl;
    }
    return 0;
}

