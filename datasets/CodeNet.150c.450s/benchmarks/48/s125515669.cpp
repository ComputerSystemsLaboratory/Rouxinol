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
            int y = sqrt(e-val);
            m = min(m, (e - val - y * y) + y + z);
        }
        cout << m << endl;
    }
    return EXIT_SUCCESS;
}