#include "bits/stdc++.h"
#define ALL(a) (a).begin(),(a).end()
#define debug(x) cout << #x << " : " << (x) << " --------------" << endl;
using namespace std;

int main(void){
    int e;
    while (cin >> e, e) {
        int m = 1000000;
        for (int z = 100; z >= 0; --z) {
            int val = z * z * z;
            if (val > e) continue;
            for (int y = sqrt(e-val); y >= 0; --y) {
                int val2 = val + y * y;
                if (val2 > e) continue;
                m = min(m, (e - val2) + y + z);
            }
        }
        cout << m << endl;
    }
    return EXIT_SUCCESS;
}