#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int N, M, P;
    while (cin >> N >> M >> P, N) {
        vector<int> X(N);
        int gold = 0;
        for (int i=0; i<N; ++i) {
            cin >> X[i];
            gold += X[i] * 100;
        }
        if (X[M-1] == 0) {
            cout << 0 << endl;
        } else {
            cout << (gold - gold / 100 * P) / X[M-1] << endl;
        }
    }
    return 0;
}