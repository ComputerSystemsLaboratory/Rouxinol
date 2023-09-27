#include <bits/stdc++.h>

using namespace std;

int main() {
    bool exist[31];
    for (int i = 0; i <= 30; ++i) {
        exist[i] = false;
    }
    for (int i = 0; i < 28; ++i) {
        int s;
        cin >> s;
        exist[s] = true;
    }
    for (int i = 1; i <= 30; ++i) {
        if (!exist[i]) cout << i << '\n';
    }
    return 0;
}
