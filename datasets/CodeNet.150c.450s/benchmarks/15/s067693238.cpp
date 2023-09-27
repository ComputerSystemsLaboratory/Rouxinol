#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

constexpr int Nmax = 10000;

int S[Nmax];

int main() {
    ios::sync_with_stdio(false);

    int same = 0;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int value;
        cin >> value;
        for (int j = 0; j < n; j++) {
            if (S[j] == value) {
                same++;
                break;
            }
        }
    }
    cout << same << endl;

    return 0;
}