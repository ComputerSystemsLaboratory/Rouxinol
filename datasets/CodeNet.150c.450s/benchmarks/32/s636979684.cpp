#include <iostream>
#include <algorithm>
using namespace std;

bool solve() {
    int M, Nmin, Nmax;
    cin >> M >> Nmin >> Nmax;
    if (M == 0 && Nmin == 0 && Nmax == 0) {
        return false;
    }
    int p[200];
    for (int j = 0; j < M; j++) {
        cin >> p[j];
    }

    int ind = Nmin-1;
    for (int j = Nmin; j < Nmax; ++j) {
        if (p[j]-p[j+1] >= p[ind]-p[ind+1]) {
            ind = j;
        }
    }
    cout << ind+1 << endl;
    return true;
}

int main() {
    for(;solve(););
    return 0;
}