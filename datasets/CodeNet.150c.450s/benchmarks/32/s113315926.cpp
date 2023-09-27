#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m, n_min, n_max;

    while(1) {
        cin >> m >> n_min >> n_max;
        if(m + n_min + n_max == 0) break;

        vector<int> P(m);
        for(int i = 0; i < m; i++) {
            cin >> P[i];
        }

        int ans = 0;
        int gap = 0;
        for(int i = n_max; i >= n_min; i--) {
            if(gap < P[i-1] - P[i]) {
                ans = i;
                gap = P[i-1] - P[i];
            }
        }

        cout << ans << endl; 
    }

    return 0;
}
