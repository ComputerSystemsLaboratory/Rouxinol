#include <iostream>
using namespace std;

int main() {
    bool S[13] = {}, H[13] = {}, C[13] = {}, D[13] = {};
    int n; cin >> n;
    while (n--) {
        char c; cin >> c;
        int  x; cin >> x;
        if (c == 'S') S[x - 1] = true;
        if (c == 'H') H[x - 1] = true;
        if (c == 'C') C[x - 1] = true;
        if (c == 'D') D[x - 1] = true;
    }
    for (int i = 0; i < 13; ++i) if (!S[i]) {
        cout << 'S' << ' ' << i + 1 << endl;
    }
    for (int i = 0; i < 13; ++i) if (!H[i]) {
        cout << 'H' << ' ' << i + 1 << endl;
    }
    for (int i = 0; i < 13; ++i) if (!C[i]) {
        cout << 'C' << ' ' << i + 1 << endl;
    }
    for (int i = 0; i < 13; ++i) if (!D[i]) {
        cout << 'D' << ' ' << i + 1 << endl;
    }
    return 0;
}
