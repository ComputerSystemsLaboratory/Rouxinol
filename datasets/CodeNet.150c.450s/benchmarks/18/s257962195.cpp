#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    int debt = 100000;
    REP(i, n) {
        debt *= 1.05;
        if (debt % 1000 != 0) {
            debt -= debt % 1000;
            debt += 1000;
        }
    }
    cout << debt << endl;
    return 0;
}