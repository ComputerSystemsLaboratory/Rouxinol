#include <vector>
#include <iostream>
#include <set>
#include <cmath>

#define FOR(i,n) for(int i=0; i<n; i++)
#define FORI(i,z,n) for(int i=z; i<n; i++)

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;

    set<int> coins;
    vector<int> dyn(n);
    dyn[0] = 1;

    FOR(i, m) {
        int c;
        cin >> c;
        coins.insert(c);
    }

    FORI(i, 1, n) {
        int coinVal = i+1;
        if (coins.find(coinVal) != coins.end()) {
            // There is an exact coin for the value i
            dyn[i] = 1;
        } else {
            // We need to combine previous value e.g: (n-1, 1), (n-2, 2), ...
            int minVal = 0;
            int inf = 0;
            int sup = i-1;
            FOR(j, ceil(i/2) + 1)
            while (sup >= inf) {
                if (minVal == 0 || dyn[inf] + dyn[sup] < minVal)
                    minVal = dyn[inf] + dyn[sup];
                inf++;
                sup--;
            }
            dyn[i] = minVal;
        }
    }

    cout << dyn[n-1] << endl;
}

